#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    interfaceInitialization();
    precedureInitialization();

}

MainWindow::~MainWindow()
{
    for(int i=0; i<tcpInfoList.size(); i++){
        tcpInfoList[i]->tcp->disconnect(this);//断开tcp的信号连接，以避免close tcp时触发disconnected信号，造成重复销毁
        tcpInfoList[i]->th->quit();
        tcpInfoList[i]->th->wait();
        tcpInfoList[i]->tcp->close();
        delete tcpInfoList[i]->tcp;
        delete tcpInfoList[i]->working;
        delete tcpInfoList[i]->th;
        delete tcpInfoList[i];
    }
    delete ui;
}


void MainWindow::interfaceInitialization()
{
    setWindowTitle("交流系统(服务端)");
    ui->listenStatus_label->setText("未在监听");
    ui->port_lineEdit->setText("8989");
}

void MainWindow::precedureInitialization()
{
    //初始化服务器对象
    myServer = new QTcpServer(this);
    //当按下监听按钮，启动监听
    connect(ui->listen_button, &QPushButton::clicked, [this](){
        unsigned short port = ui->port_lineEdit->text().toUShort();
        myServer->listen(QHostAddress::Any,port);
        ui->listen_button->setDisabled(true);
        ui->listenClose_button->setDisabled(false);
        ui->listenStatus_label->setText("正在监听");
    });
    //当按下关闭监听
    connect(ui->listenClose_button, &QPushButton::clicked, [this](){
        myServer->close();
        ui->listen_button->setDisabled(false);
        ui->listenClose_button->setDisabled(true);
        ui->listenStatus_label->setText("未在监听");
    });

    //当检测到有信号连接
    connect(myServer, &QTcpServer::newConnection, this, [this](){
        //建立连接
        QTcpSocket *myTcp = myServer->nextPendingConnection();//创建tcp对象
        ServerWorking *myWork = new ServerWorking(myTcp);//创建work对象
        connect(this, &MainWindow::sendWork, myWork, &ServerWorking::connectClient);
        QThread *th = new QThread;//创建线程对象
        myWork->moveToThread(th);
        emit sendWork();
        th->start();

        //界面交互
        TcpInfo *tcpinfo = new TcpInfo(myTcp,myWork,th,num,"");
        tcpInfoList.push_back(tcpinfo);
        num++;
        ui->clientInfo_listWidget->addItem("IP地址:" + myTcp->peerAddress().toString() + "    端口:" + QString::number(myTcp->peerPort()) + "    " + tcpinfo->status);

        //当信号断开
        connect(myTcp, &QTcpSocket::disconnected, this, [=](){
            th->quit();
            th->wait();
            myTcp->close();
            ui->clientInfo_listWidget->takeItem(tcpinfo->num);
            for(int i=tcpinfo->num;i<tcpInfoList.size()-1;i++){
                tcpInfoList[i]=tcpInfoList[i+1];
                tcpInfoList[i]->num--;
            }
            tcpInfoList.pop_back();
            num--;
            delete myTcp;
            delete myWork;
            delete th;
            delete tcpinfo;
        });

        //当接收完文件
        connect(myWork, &ServerWorking::recvOver, this, [this](qreal speed){
            QString unit = "B/s";
            if(speed>1024){
                speed/=1024;
                unit = "KB/s";
            }
            if(speed>1024){
                speed/=1024;
                unit = "MB/s";
            }
            if(speed>1024){
                speed/=1024;
                unit = "GB/s";
            }
            QMessageBox::information(this,"接收文件","文件已接收\n速度：" + QString::number(speed) + unit);
        });


        //当收到消息
        connect(myWork, &ServerWorking::recvMsgOver,this, [=](QString msg){
            ui->textEdit->append(myTcp->peerAddress().toString()+":  "+msg);
        });


    });


}


