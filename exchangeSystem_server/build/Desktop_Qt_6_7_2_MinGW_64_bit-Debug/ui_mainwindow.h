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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
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
    QHBoxLayout *horizontalLayout;
    QLabel *port_label;
    QLineEdit *port_lineEdit;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *listen_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *listenClose_button;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QListWidget *clientInfo_listWidget;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *textEdit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *listenStatus_label;
    QSpacerItem *horizontalSpacer_4;
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
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        port_label = new QLabel(widget);
        port_label->setObjectName("port_label");

        horizontalLayout->addWidget(port_label);

        port_lineEdit = new QLineEdit(widget);
        port_lineEdit->setObjectName("port_lineEdit");

        horizontalLayout->addWidget(port_lineEdit);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        listen_button = new QPushButton(widget_2);
        listen_button->setObjectName("listen_button");

        horizontalLayout_2->addWidget(listen_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        listenClose_button = new QPushButton(widget_2);
        listenClose_button->setObjectName("listenClose_button");

        horizontalLayout_2->addWidget(listenClose_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_2);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName("widget_6");
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        label_3 = new QLabel(widget_6);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(widget_6);

        clientInfo_listWidget = new QListWidget(centralwidget);
        clientInfo_listWidget->setObjectName("clientInfo_listWidget");
        clientInfo_listWidget->setMaximumSize(QSize(300, 200));

        verticalLayout->addWidget(clientInfo_listWidget, 0, Qt::AlignHCenter);

        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName("widget_5");
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(widget_5);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);


        verticalLayout->addWidget(widget_5);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        textEdit = new QTextEdit(widget_4);
        textEdit->setObjectName("textEdit");

        horizontalLayout_4->addWidget(textEdit);


        verticalLayout->addWidget(widget_4);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(widget_3);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        listenStatus_label = new QLabel(widget_3);
        listenStatus_label->setObjectName("listenStatus_label");

        horizontalLayout_3->addWidget(listenStatus_label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_3);

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
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\210\227\350\241\250", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\266\210\346\201\257\346\240\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\233\221\345\220\254\347\212\266\346\200\201\357\274\232", nullptr));
        listenStatus_label->setText(QCoreApplication::translate("MainWindow", "\346\234\252\345\234\250\347\233\221\345\220\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
