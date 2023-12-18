#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QtGlobal>
#include <QPushButton>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);

  connect(ui->pushButtonStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(putData()));
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

int MainWindow::getStop() {
  return stop;
}

void MainWindow::setStop(int value) {
  stop = value;
}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  while(getStop()==0){
    if(ui->horizontalSliderMax->value() > ui->horizontalSliderMin->value()){
        if(socket->state()== QAbstractSocket::ConnectedState){
        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " +
            QString::number(rand()%(ui->horizontalSliderMax->value() - ui->horizontalSliderMin->value()) + ui->horizontalSliderMin->value())+"\r\n";
        ui->listWidget->addItem(str);
        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str())
                << " bytes written";
        if(socket->waitForBytesWritten(3000)){
            qDebug() << "wrote";
        }
        QTime dieTime= QTime::currentTime().addSecs(ui->horizontalSliderTiming->value());
        while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        }
        } else {
        setStop(1);
        }
    }
  setStop(0);
}

void MainWindow::StopClicked(){
  setStop(1);
}

void MainWindow::Connect()
{
  socket = new QTcpSocket(this);
  tcpConnect();
  ui->labelstatus->setText("connected");
}

void MainWindow::Disconnect()
{
  ui->labelstatus->setText("disconnected");
  delete socket;
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}
