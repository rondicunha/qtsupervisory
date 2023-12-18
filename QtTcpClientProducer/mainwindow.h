#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

private:
  int stop=0;

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

  int getStop();
  void setStop(int value);
  
  void tcpConnect();
public slots:
  void putData();
  void StopClicked();
  void Connect();
  void Disconnect();
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
