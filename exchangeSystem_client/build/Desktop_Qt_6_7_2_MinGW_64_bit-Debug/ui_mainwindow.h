/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *ip_label;
    QLineEdit *ip_lineEdit;
    QLabel *port_label;
    QLineEdit *port_lineEdit;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *connect_pushButton;
    QPushButton *connectOver_pushButton;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *linkStatus_label;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *file_lineEdit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *choseFile_pushButton;
    QPushButton *sendFile_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(350, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 30, 261, 71));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        ip_label = new QLabel(widget);
        ip_label->setObjectName("ip_label");

        gridLayout->addWidget(ip_label, 0, 0, 1, 1);

        ip_lineEdit = new QLineEdit(widget);
        ip_lineEdit->setObjectName("ip_lineEdit");

        gridLayout->addWidget(ip_lineEdit, 0, 1, 1, 1);

        port_label = new QLabel(widget);
        port_label->setObjectName("port_label");

        gridLayout->addWidget(port_label, 1, 0, 1, 1);

        port_lineEdit = new QLineEdit(widget);
        port_lineEdit->setObjectName("port_lineEdit");

        gridLayout->addWidget(port_lineEdit, 1, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(30, 130, 251, 51));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        connect_pushButton = new QPushButton(widget_2);
        connect_pushButton->setObjectName("connect_pushButton");

        horizontalLayout_2->addWidget(connect_pushButton);

        connectOver_pushButton = new QPushButton(widget_2);
        connectOver_pushButton->setObjectName("connectOver_pushButton");

        horizontalLayout_2->addWidget(connectOver_pushButton);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(30, 100, 251, 31));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        linkStatus_label = new QLabel(widget_3);
        linkStatus_label->setObjectName("linkStatus_label");

        horizontalLayout->addWidget(linkStatus_label);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(30, 180, 261, 34));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        file_lineEdit = new QLineEdit(widget_4);
        file_lineEdit->setObjectName("file_lineEdit");

        horizontalLayout_4->addWidget(file_lineEdit);

        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(30, 210, 251, 61));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        choseFile_pushButton = new QPushButton(widget_5);
        choseFile_pushButton->setObjectName("choseFile_pushButton");

        horizontalLayout_3->addWidget(choseFile_pushButton);

        sendFile_pushButton = new QPushButton(widget_5);
        sendFile_pushButton->setObjectName("sendFile_pushButton");

        horizontalLayout_3->addWidget(sendFile_pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 350, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ip_label->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        port_label->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243", nullptr));
        connect_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\277\236\346\216\245", nullptr));
        connectOver_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\350\277\236\346\216\245", nullptr));
        linkStatus_label->setText(QCoreApplication::translate("MainWindow", "\346\234\252\350\277\236\346\216\245", nullptr));
        choseFile_pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        sendFile_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
