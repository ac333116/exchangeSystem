#ifndef CLIENTWORKING_H
#define CLIENTWORKING_H

#include <QObject>
#include <QTcpSocket>

class ClientWorking : public QObject
{
    Q_OBJECT
public:
    explicit ClientWorking(QObject *parent = nullptr);


private:
    QTcpSocket *myTcp = nullptr;

signals:
    void connectOk(unsigned short port, QString ip);
    void connectOver();
    void sendOver();

public:
    void connectServer(unsigned short port, QString ip);
    void finishConnect();
    void sendFile(QString filePath);
    void sendMsg(QString msg);

};

#endif // CLIENTWORKING_H
