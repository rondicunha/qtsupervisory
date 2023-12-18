#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTcpSocket>
#include <QString>
#include <QStringList>
#include <iostream>
#include <string>
#include <vector>


MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  //socket = new QTcpSocket(this);
  //tcpConnect();

  connect(ui->pushButtonStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));
  connect(ui->pushButtonStop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(StopClicked()));
  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(Connect()));
  connect(ui->pushButtonDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(Disconnect()));
  connect(ui->pushButtonUpdate,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));
}

int MainWindow::getStop() {
  return stop;
}

void MainWindow::setStop(int value) {
  stop = value;
}

void MainWindow::tcpConnect(){
  socket->connectToHost(ui->lineEditIP->text(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
}


void MainWindow::machines()
{
  QString str;
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
        socket->write("list \r\n");
        socket->waitForBytesWritten();
        socket->waitForReadyRead();

        while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        QStringList machinesList = str.split(" ");
        for (const QString& machine : machinesList) {
           ui->listWidget->addItem(machine);
        }
        }
        }
    }
  }

void MainWindow::StopClicked(){
  setStop(1);
}

void MainWindow::Connect()
{
  socket = new QTcpSocket(this);
  tcpConnect();
  machines();
  ui->listWidget->setCurrentRow(0);
}

void MainWindow::Disconnect()
{
  delete socket;
  ui->listWidget->clear();
}

void MainWindow::getData(){
  QString str;
  std::string s1="get ", s3=" 30\r\n";
  QString s2=ui->listWidget->currentItem()->text();
  std::string s4= s2.toStdString();
  std::string s5= s1 + s4 + s3;
  const char* s6 = s5.c_str();
  QByteArray array;
  QStringList list;
  qint64 thetime;
  int valor;
  std::vector<int> valores;
  std::vector<long> tempo;

  qDebug() << "to get data...";
  while(stop==0){
    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
        qDebug() << "reading...";
        socket->write(s6);
        socket->waitForBytesWritten();
        socket->waitForReadyRead();
        qDebug() << socket->bytesAvailable();
        valores.clear(); tempo.clear();
        while(socket->bytesAvailable()){
            str = socket->readLine().replace("\n","").replace("\r","");
            list = str.split(" ");
            if(list.size() == 2){
            bool ok;
            str = list.at(0);
            thetime = str.toLongLong(&ok);
            str = list.at(1);
            valor = str.toInt(&ok);
            tempo.push_back(thetime);
            valores.push_back(valor);
            qDebug() << thetime << ": " << str;
                    }
                }
            }
        }
    ui->plotter->load(tempo, valores);
    QTime dieTime= QTime::currentTime().addSecs(ui->horizontalSliderTiming->value());
    while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
  setStop(0);
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
