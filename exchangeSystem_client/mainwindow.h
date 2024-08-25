#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "clientworking.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;


private:
    QThread *th;
    ClientWorking *work;

signals:
    void startConnect(unsigned short port, QString ip);
    void startSendFile(QString filePath);
    void startSendMsg(QString msg);

private:
    void interfaceInitialization();//界面初始化
    void precedureInitialization();//程序初始化

};
#endif // MAINWINDOW_H
