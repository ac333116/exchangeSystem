#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QThread>
#include <QFile>
#include <QFileDialog>
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
    th->quit();
    th->wait();
    delete work;
    delete th;
    delete ui;
}


void MainWindow::interfaceInitialization(){
    setWindowTitle("交流系统(客户端)");
    ui->connectOver_pushButton->setDisabled(true);
    ui->sendFile_pushButton->setDisabled(true);
    ui->port_lineEdit->setText("8989");
    ui->ip_lineEdit->setText("127.0.0.1");
}

void MainWindow::precedureInitialization(){
    th = new QThread;
    work = new ClientWorking;
    work->moveToThread(th);

    //当按下连接按钮
    connect(ui->connect_pushButton, &QPushButton::clicked, [this](){
        QString ip = ui->ip_lineEdit->text();
        unsigned short port = ui->port_lineEdit->text().toUShort();
        emit startConnect(port,ip);
    });
    connect(this, &MainWindow::startConnect, work, &ClientWorking::connectServer);
    //当按下断开连接按钮
    connect(ui->connectOver_pushButton, &QPushButton::clicked, work, &ClientWorking::finishConnect);

    //当成功连接
    connect(work, &ClientWorking::connectOk, this, [this](unsigned short port, QString ip){
        ui->linkStatus_label->setText("已连接至：" + ip + ":" + QString::number(port));
        ui->connect_pushButton->setDisabled(true);
        ui->connectOver_pushButton->setDisabled(false);
        ui->sendFile_pushButton->setDisabled(false);
    });
    //当断开连接
    connect(work, &ClientWorking::connectOver, this, [this](){
        ui->linkStatus_label->setText("未连接");
        ui->connect_pushButton->setDisabled(false);
        ui->connectOver_pushButton->setDisabled(true);
        ui->sendFile_pushButton->setDisabled(true);
    });



    //当点击选择文件按钮
    connect(ui->choseFile_pushButton, &QPushButton::clicked, [this](){
        QString filePath = QFileDialog::getOpenFileName(this,"选择文件",QDir::currentPath());
        if(!filePath.isEmpty()){
            ui->file_lineEdit->setText(filePath);
        }
    });
    //当点击发送文件按钮时
    connect(ui->sendFile_pushButton, &QPushButton::clicked, [this](){
        QFile file(ui->file_lineEdit->text());
        if(!file.exists()){
            QMessageBox::information(this,"发送文件","文件不存在");
            return;
        }
        emit startSendFile(ui->file_lineEdit->text());
    });
    connect(this, &MainWindow::startSendFile, work, &ClientWorking::sendFile);

    //当文件发送完成
    connect(work, &ClientWorking::sendOver,this, [this](){
        QMessageBox::information(this,"发送文件","发送成功");
    });


    //当点击发送消息按钮
    connect(ui->sendMsg_pushButton, &QPushButton::clicked, [this](){
        QString msg = ui->lineEdit->text();
        if(msg!=""){
            ui->textEdit->append("你:"+msg);
            emit startSendMsg(msg);
        }
    });
    connect(ui->lineEdit, &QLineEdit::returnPressed, [this](){
        QString msg = ui->lineEdit->text();
        if(msg!=""){
            ui->textEdit->append("你:"+msg);
            emit startSendMsg(msg);
        }
    });
    connect(this, &MainWindow::startSendMsg, work, &ClientWorking::sendMsg);


    th->start();
}
