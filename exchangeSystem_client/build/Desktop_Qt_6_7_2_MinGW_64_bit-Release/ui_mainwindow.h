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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *ip_label;
    QLineEdit *ip_lineEdit;
    QLabel *port_label;
    QLineEdit *port_lineEdit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *linkStatus_label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *connect_pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *connectOver_pushButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *file_lineEdit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *choseFile_pushButton;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *sendFile_pushButton;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *textEdit;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *sendMsg_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(350, 600);
        MainWindow->setMinimumSize(QSize(350, 600));
        MainWindow->setMaximumSize(QSize(350, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
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


        verticalLayout->addWidget(widget);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        linkStatus_label = new QLabel(widget_3);
        linkStatus_label->setObjectName("linkStatus_label");

        horizontalLayout->addWidget(linkStatus_label);


        verticalLayout->addWidget(widget_3);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        connect_pushButton = new QPushButton(widget_2);
        connect_pushButton->setObjectName("connect_pushButton");

        horizontalLayout_2->addWidget(connect_pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        connectOver_pushButton = new QPushButton(widget_2);
        connectOver_pushButton->setObjectName("connectOver_pushButton");

        horizontalLayout_2->addWidget(connectOver_pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        file_lineEdit = new QLineEdit(widget_4);
        file_lineEdit->setObjectName("file_lineEdit");

        horizontalLayout_4->addWidget(file_lineEdit);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName("widget_5");
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        choseFile_pushButton = new QPushButton(widget_5);
        choseFile_pushButton->setObjectName("choseFile_pushButton");

        horizontalLayout_3->addWidget(choseFile_pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        sendFile_pushButton = new QPushButton(widget_5);
        sendFile_pushButton->setObjectName("sendFile_pushButton");

        horizontalLayout_3->addWidget(sendFile_pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_5);

        widget_9 = new QWidget(centralwidget);
        widget_9->setObjectName("widget_9");
        horizontalLayout_7 = new QHBoxLayout(widget_9);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(widget_9);
        label->setObjectName("label");

        horizontalLayout_7->addWidget(label);


        verticalLayout->addWidget(widget_9);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName("widget_6");
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        textEdit = new QTextEdit(widget_6);
        textEdit->setObjectName("textEdit");

        horizontalLayout_5->addWidget(textEdit);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName("widget_7");
        verticalLayout_2 = new QVBoxLayout(widget_7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        lineEdit = new QLineEdit(widget_7);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);


        verticalLayout->addWidget(widget_7);

        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName("widget_8");
        horizontalLayout_6 = new QHBoxLayout(widget_8);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_7 = new QSpacerItem(239, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        sendMsg_pushButton = new QPushButton(widget_8);
        sendMsg_pushButton->setObjectName("sendMsg_pushButton");

        horizontalLayout_6->addWidget(sendMsg_pushButton);


        verticalLayout->addWidget(widget_8);

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
        linkStatus_label->setText(QCoreApplication::translate("MainWindow", "\346\234\252\350\277\236\346\216\245", nullptr));
        connect_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\277\236\346\216\245", nullptr));
        connectOver_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\350\277\236\346\216\245", nullptr));
        choseFile_pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        sendFile_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\266\210\346\201\257\346\240\217", nullptr));
        sendMsg_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
