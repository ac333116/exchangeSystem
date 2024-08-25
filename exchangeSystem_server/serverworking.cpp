#include "serverworking.h"
#include <QFile>
#include <QDebug>
#include <QElapsedTimer>

ServerWorking::ServerWorking(QTcpSocket* tcp, QObject *parent)
    : QObject{parent}
{
    myTcp = tcp;
}

void ServerWorking::connectClient()
{
    connect(myTcp, &QTcpSocket::readyRead,[=](){
        if(recvFileIng==true)
        {
            recvFile();
        }
        // else if(recvMsgIng==true){
        //     recvMsg();
        // }
        else
        {
            QDataStream in(myTcp);
            QString order;
            in >> order;
            if(order=="sendFile"){
                recvFileIng=true;
                recvFile();
            }
            else if(order=="sendMsg"){
                // recvMsgIng=true;
                recvMsg();
            }
        }
    });
}

void ServerWorking::recvFile()
{
    static QElapsedTimer time;
    static quint64 count = 0;
    static QString fileName;
    static quint64 fileSize;
    static QFile *file;
    if(count==0){
        if (myTcp->bytesAvailable() < (int)sizeof(quint64)+(int)sizeof(QString))return;
        QDataStream in(myTcp);
        in >> fileName >> fileSize;
        //file.setFileName(fileName);
        file = new QFile(fileName);
        file->open(QFile::WriteOnly);
        time.start();
    }

    QByteArray all = myTcp->readAll();
    file->write(all);
    count += all.size();

    if(count==fileSize){
        count = 0;
        file->close();
        delete file;
        recvFileIng = false;
        qreal speed = fileSize/(time.elapsed()*1.0/1000);//每秒传输字节数
        time.invalidate();
        emit recvOver(speed);
    }
}

void ServerWorking::recvMsg()
{
    QString msg;
    QDataStream in(myTcp);
    in >> msg;
    emit recvMsgOver(msg);
    // recvMsgIng = false;
}

