/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QCheckBox *checkBox;
    QLabel *left;
    QLabel *right;
    QLabel *mouse;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1348, 832);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192)"));
        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(560, 0, 70, 20));
        checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        left = new QLabel(Widget);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(660, 0, 60, 20));
        right = new QLabel(Widget);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(730, 0, 60, 20));
        mouse = new QLabel(Widget);
        mouse->setObjectName(QString::fromUtf8("mouse"));
        mouse->setGeometry(QRect(640, 5, 1, 1));
        mouse->setMinimumSize(QSize(1, 1));
        mouse->setMaximumSize(QSize(999999, 999999));
        mouse->setStyleSheet(QString::fromUtf8("background-color: rgb(10,10,10);"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(5, 0, 50, 20));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 0, 75, 20));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 0, 75, 20));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(395, 0, 75, 20));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(800, 0, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\346\230\257\345\220\246\346\266\202\351\270\246", nullptr));
        left->setText(QString());
        right->setText(QString());
        mouse->setText(QString());
        label->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\351\242\234\350\211\262", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\347\272\277\346\256\265\347\261\273\345\236\213", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\347\254\224\347\224\273\347\262\227\347\273\206", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\347\254\224\347\224\273\347\262\227\347\273\206", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
