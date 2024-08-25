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
#include <QtWidgets/QListWidget>
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
    QHBoxLayout *horizontalLayout;
    QLabel *port_label;
    QLineEdit *port_lineEdit;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *listen_button;
    QPushButton *listenClose_button;
    QListWidget *clientInfo_listWidget;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *listenStatus_label;
    QLabel *label_2;
    QLabel *connectStatus_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(350, 500);
        MainWindow->setMinimumSize(QSize(350, 500));
        MainWindow->setMaximumSize(QSize(350, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 40, 251, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        port_label = new QLabel(widget);
        port_label->setObjectName("port_label");

        horizontalLayout->addWidget(port_label);

        port_lineEdit = new QLineEdit(widget);
        port_lineEdit->setObjectName("port_lineEdit");

        horizontalLayout->addWidget(port_lineEdit);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(80, 90, 176, 51));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        listen_button = new QPushButton(widget_2);
        listen_button->setObjectName("listen_button");

        horizontalLayout_2->addWidget(listen_button);

        listenClose_button = new QPushButton(widget_2);
        listenClose_button->setObjectName("listenClose_button");

        horizontalLayout_2->addWidget(listenClose_button);

        clientInfo_listWidget = new QListWidget(centralwidget);
        clientInfo_listWidget->setObjectName("clientInfo_listWidget");
        clientInfo_listWidget->setGeometry(QRect(50, 170, 256, 192));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(50, 370, 251, 81));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(widget_3);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        listenStatus_label = new QLabel(widget_3);
        listenStatus_label->setObjectName("listenStatus_label");

        gridLayout->addWidget(listenStatus_label, 0, 1, 1, 1);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        connectStatus_label = new QLabel(widget_3);
        connectStatus_label->setObjectName("connectStatus_label");

        gridLayout->addWidget(connectStatus_label, 1, 1, 1, 1);

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
        port_label->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", nullptr));
        listen_button->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\347\233\221\345\220\254", nullptr));
        listenClose_button->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\347\233\221\345\220\254", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\233\221\345\220\254\347\212\266\346\200\201\357\274\232", nullptr));
        listenStatus_label->setText(QCoreApplication::translate("MainWindow", "\346\234\252\345\234\250\347\233\221\345\220\254", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\347\212\266\346\200\201\357\274\232", nullptr));
        connectStatus_label->setText(QCoreApplication::translate("MainWindow", "\346\262\241\346\234\211\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
