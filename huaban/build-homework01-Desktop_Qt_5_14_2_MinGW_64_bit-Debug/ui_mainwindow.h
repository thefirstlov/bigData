/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_8;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 40, 54, 12));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 30, 21, 23));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(120, 390, 151, 16));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(340, 390, 91, 16));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(340, 420, 161, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 130, 54, 12));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 100, 121, 201));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(190, 100, 160, 201));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_3->addWidget(comboBox);

        comboBox_2 = new QComboBox(verticalLayoutWidget_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_3->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(verticalLayoutWidget_2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        verticalLayout_3->addWidget(comboBox_3);

        comboBox_4 = new QComboBox(verticalLayoutWidget_2);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        verticalLayout_3->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(verticalLayoutWidget_2);
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        verticalLayout_3->addWidget(comboBox_5);

        comboBox_6 = new QComboBox(verticalLayoutWidget_2);
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        verticalLayout_3->addWidget(comboBox_6);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(370, 150, 160, 80));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBox_4 = new QCheckBox(verticalLayoutWidget_3);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_4->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(verticalLayoutWidget_3);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout_4->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(verticalLayoutWidget_3);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_4->addWidget(checkBox_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\277\253\351\200\237\350\277\236\346\216\245", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\346\227\266\346\230\276\347\244\272\345\277\253\351\200\237\350\277\236\346\216\245(W)", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\274\232\350\257\235(V)", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "\345\234\250\346\240\207\347\255\276\351\241\265\344\270\255\346\211\223\345\274\200(T)", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\265\201\346\216\247", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243(O):", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\215\217\350\256\256(P):", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207(B):", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215(D):", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\245\207\345\201\266\346\240\241\351\252\214(A):", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215(S):", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Serial", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "COM2", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "COM3", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "COM4", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "38400", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "115200", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "16", nullptr));

        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));

        comboBox_6->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));

        checkBox_4->setText(QCoreApplication::translate("MainWindow", "DTR/DSR", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "RTS/CTS", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "XON/XOFF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
