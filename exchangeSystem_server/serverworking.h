#ifndef SERVERWORKING_H
#define SERVERWORKING_H

#include <QObject>
#include <QTcpSocket>

class ServerWorking : public QObject
{
    Q_OBJECT
public:
    explicit ServerWorking(QTcpSocket* tcp, QObject *parent = nullptr);


private:
    QTcpSocket *myTcp;
    bool recvFileIng=false;
    bool recvMsgIng=false;

signals:
    void recvOver(qreal speed);
    void recvMsgOver(QString msg);

public:
    void connectClient();
    void checkOrder();
    void recvFile();
    void recvMsg();


};

#endif // SERVERWORKING_H
