/********************************************************************************
** Form generated from reading UI file 'rongliang.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RONGLIANG_H
#define UI_RONGLIANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rongliang
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QDoubleSpinBox *doubleSpinBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton_16;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_15;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLabel *label;

    void setupUi(QWidget *rongliang)
    {
        if (rongliang->objectName().isEmpty())
            rongliang->setObjectName("rongliang");
        rongliang->resize(549, 548);
        rongliang->setMaximumSize(QSize(1000, 10000));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setBold(false);
        font.setItalic(false);
        rongliang->setFont(font);
        rongliang->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(rongliang);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setGeometry(QRect(0, 0, 411, 571));
        centralWidget->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"padding-left: 8px;\n"
"padding-right: 24px;\n"
"color: black; /* \344\277\256\346\224\271\346\226\207\346\234\254\351\242\234\350\211\262\344\270\272\351\273\221\350\211\262 */\n"
"background-color: white; /* \344\277\256\346\224\271\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"border: 1px solid black; /* \350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"border-radius: 4px;\n"
"font-size: 14px;\n"
"selection-background-color: rgb(200, 200, 200); /* \351\200\211\344\270\255\351\241\271\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"border: 1px solid rgb(100, 100, 100); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"width: 20px;\n"
"height: 20px;\n"
"subcontrol-origin: padding;\n"
"subcontrol-position: right;\n"
"border: none;\n"
"background-color: transparent;\n"
"}\n"
"\n"
"\n"
"QComboBox::down-"
                        "arrow:hover {\n"
"image: url(:/img/down_gray.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\344\270\213\346\213\211\347\256\255\345\244\264\345\233\276\346\240\207\357\274\214\347\201\260\350\211\262 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"background-color: white;\n"
"color: black;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"height: 26px;\n"
"font-size: 14px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:hover {\n"
"background-color: rgb(200, 200, 200); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\344\270\213\346\213\211\345\210\227\350\241\250\351\241\271\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QLabel{\n"
"font-size: 35px;\n"
"}\n"
""));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 100, 131, 22));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(20, 30, 281, 51));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"    font-family: \"Arial\", sans-serif; /* \351\200\211\346\213\251\345\255\227\344\275\223\345\256\266\346\227\217 */\n"
"    font-size: 37px; /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    color: black; /* \350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    width: 20px; /* \350\256\276\347\275\256\344\270\212\344\270\213\346\214\211\351\222\256\347\232\204\345\256\275\345\272\246 */\n"
"    height: 20px; /* \350\256\276\347\275\256\344\270\212\344\270\213\346\214\211\351\222\256\347\232\204\351\253\230\345\272\246 */\n"
"}\n"
"\n"
"QDoubleSpinBox[readOnly=\"false\"] {\n"
"    /* \350\256\276\347\275\256\345\205\201\350\256\270\350\276\223\345\205\245\347\232\204\345\260\217\346\225\260\347\202\271\345\220\216\347\232\204\344\275\215\346\225\260\344\270\2722\344\275\215 */\n"
"    decimals: 2;\n"
"}\n"
"\n"
""));
        doubleSpinBox->setDecimals(0);
        doubleSpinBox->setMaximum(999999999.000000000000000);
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(20, 200, 131, 22));
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(260, 260, 111, 51));
        pushButton_16->setSizeIncrement(QSize(5, 0));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(260, 380, 111, 51));
        pushButton_6->setSizeIncrement(QSize(5, 0));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 440, 111, 51));
        pushButton_3->setSizeIncrement(QSize(5, 0));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(140, 320, 111, 51));
        pushButton_8->setSizeIncrement(QSize(5, 0));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 440, 111, 51));
        pushButton_2->setSizeIncrement(QSize(5, 0));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(140, 380, 111, 51));
        pushButton_5->setSizeIncrement(QSize(5, 0));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(140, 260, 111, 51));
        pushButton_15->setSizeIncrement(QSize(5, 0));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 320, 111, 51));
        pushButton_7->setSizeIncrement(QSize(5, 0));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(260, 320, 111, 51));
        pushButton_9->setSizeIncrement(QSize(5, 0));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 440, 111, 51));
        pushButton->setSizeIncrement(QSize(5, 0));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 380, 111, 51));
        pushButton_4->setSizeIncrement(QSize(5, 0));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(140, 500, 111, 51));
        pushButton_12->setSizeIncrement(QSize(5, 0));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(260, 500, 111, 51));
        pushButton_13->setSizeIncrement(QSize(5, 0));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 150, 351, 41));
        label->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(rongliang);

        QMetaObject::connectSlotsByName(rongliang);
    } // setupUi

    void retranslateUi(QWidget *rongliang)
    {
        rongliang->setWindowTitle(QCoreApplication::translate("rongliang", "\346\213\211\350\203\257\350\256\241\347\256\227\345\231\250", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("rongliang", "\346\257\253\345\215\207", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\345\216\230\347\261\263", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("rongliang", "\345\215\207", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\347\261\263", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\350\213\261\345\257\270", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\350\213\261\345\260\272", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\347\240\201", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("rongliang", "\345\223\201\350\204\261", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("rongliang", "\345\244\270\350\204\261", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("rongliang", "\345\212\240\344\273\221", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("rongliang", "\346\257\253\345\215\207", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\345\216\230\347\261\263", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("rongliang", "\345\215\207", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\347\261\263", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\350\213\261\345\257\270", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\350\213\261\345\260\272", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\347\240\201", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("rongliang", "\345\223\201\350\204\261", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("rongliang", "\345\244\270\350\204\261", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("rongliang", "\345\212\240\344\273\221", nullptr));

        pushButton_16->setText(QCoreApplication::translate("rongliang", "<-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("rongliang", "6", nullptr));
        pushButton_3->setText(QCoreApplication::translate("rongliang", "3", nullptr));
        pushButton_8->setText(QCoreApplication::translate("rongliang", "8", nullptr));
        pushButton_2->setText(QCoreApplication::translate("rongliang", "2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("rongliang", "5", nullptr));
        pushButton_15->setText(QCoreApplication::translate("rongliang", "CE", nullptr));
        pushButton_7->setText(QCoreApplication::translate("rongliang", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("rongliang", "9", nullptr));
        pushButton->setText(QCoreApplication::translate("rongliang", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("rongliang", "4", nullptr));
        pushButton_12->setText(QCoreApplication::translate("rongliang", "0", nullptr));
        pushButton_13->setText(QCoreApplication::translate("rongliang", ".", nullptr));
        label->setText(QCoreApplication::translate("rongliang", "0.0000000000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rongliang: public Ui_rongliang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RONGLIANG_H
