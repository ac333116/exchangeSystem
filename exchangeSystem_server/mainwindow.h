#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QVector>
#include <QThread>
#include "serverworking.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

struct TcpInfo{
    QTcpSocket *tcp;
    ServerWorking *working;
    QThread *th;
    int num;
    QString status;
    TcpInfo(QTcpSocket *tcp, ServerWorking *working,QThread *th,int num,QString status):
        tcp(tcp),working(working),th(th),num(num),status(status){}
};

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;


private:
    QTcpServer *myServer;
    QVector<TcpInfo*> tcpInfoList;
    int num=0;


signals:
    void sendWork();

private:
    void interfaceInitialization();//界面初始化
    void precedureInitialization();//程序初始化



};
#endif // MAINWINDOW_H
