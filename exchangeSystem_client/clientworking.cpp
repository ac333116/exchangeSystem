#include "clientworking.h"
#include <QHostAddress>
#include <QDebug>
#include <QFile>
#include <QFileInfo>

ClientWorking::ClientWorking(QObject *parent)
    : QObject{parent}
{}

void ClientWorking::connectServer(unsigned short port, QString ip)
{
    if(myTcp!=nullptr){
        myTcp->disconnect(this);
        myTcp->close();
        delete myTcp;
    }

    myTcp = new QTcpSocket;
    myTcp->connectToHost(QHostAddress(ip),port);
    //当检测到连接成功时
    //connect(myTcp, &QTcpSocket::connected, this, &ClientWorking::connectOk);
    connect(myTcp, &QTcpSocket::connected, [=](){
        emit connectOk(port,ip);
    });
    //当检测到连接断开
    connect(myTcp, &QTcpSocket::disconnected, this, &ClientWorking::finishConnect);

}

void ClientWorking::finishConnect()
{
    if(myTcp!=nullptr){
        myTcp->disconnect(this);
        myTcp->close();
        delete myTcp;
        myTcp = nullptr;
    }
    emit connectOver();
}

void ClientWorking::sendFile(QString filePath)
{
    QFile file(filePath);
    file.open(QFile::ReadOnly);
    QFileInfo fileInfo(filePath);

    QString order = "sendFile";
    QDataStream out(myTcp);
    out << order << fileInfo.fileName() << (quint64)file.size();

    //发送文件本体
    while(!file.atEnd()){
        QByteArray line = file.readLine();
        myTcp->write(line);
    }
    emit sendOver();
}

void ClientWorking::sendMsg(QString msg)
{
    QString order = "sendMsg";
    QDataStream out(myTcp);
    out << order << msg;
}
