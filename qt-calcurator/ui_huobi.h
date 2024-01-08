/********************************************************************************
** Form generated from reading UI file 'huobi.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUOBI_H
#define UI_HUOBI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_huobi
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *huobi)
    {
        if (huobi->objectName().isEmpty())
            huobi->setObjectName("huobi");
        huobi->resize(639, 548);
        huobi->setMaximumSize(QSize(1000, 10000));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setBold(false);
        font.setItalic(false);
        huobi->setFont(font);
        huobi->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(huobi);
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
"font-size: 11px;\n"
"}\n"
"QLineEdit {\n"
"    padding: 5px;\n"
"    color: black;\n"
"    background-color: white;\n"
"    border: 1px solid rgb(128, 128, 128);\n"
"    border-radius: 4px;\n"
"    font-size: 35px;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 1px solid rgb(100, 100, 100)"
                        ";\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid rgb(0, 170, 255); /* \350\216\267\345\276\227\347\204\246\347\202\271\346\227\266\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    background-color: rgb(240, 240, 240); /* \350\216\267\345\276\227\347\204\246\347\202\271\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"    background-color: rgb(220, 220, 220);\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: rgb(150, 150, 150);\n"
"}\n"
"\n"
"QLineEdit::hover::placeholder {\n"
"    color: rgb(100, 100, 100);\n"
"}\n"
"\n"
"QLineEdit[readOnly=\"true\"] {\n"
"    background-color: rgb(240, 240, 240);\n"
"}\n"
"\n"
"QLineEdit[readOnly=\"true\"]:hover {\n"
"    border: 1px solid rgb(220, 220, 220);\n"
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
        comboBox->setGeometry(QRect(20, 90, 171, 22));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 230, 381, 31));
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
        comboBox_2->setGeometry(QRect(20, 190, 171, 22));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 500, 81, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 440, 80, 41));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(150, 440, 80, 41));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(290, 440, 80, 41));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 380, 80, 41));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(150, 380, 80, 41));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(290, 380, 80, 41));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(10, 320, 80, 41));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(150, 320, 80, 41));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(290, 320, 80, 41));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(150, 260, 80, 41));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(290, 260, 81, 41));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(290, 500, 80, 41));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 30, 321, 41));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(20, 130, 321, 41));

        retranslateUi(huobi);

        QMetaObject::connectSlotsByName(huobi);
    } // setupUi

    void retranslateUi(QWidget *huobi)
    {
        huobi->setWindowTitle(QCoreApplication::translate("huobi", "\346\213\211\350\203\257\350\256\241\347\256\227\345\231\250", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("huobi", "\344\270\255\345\233\275-\344\272\272\346\260\221\345\270\201", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("huobi", "\347\276\216\345\233\275-\347\276\216\345\205\203", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("huobi", "\345\223\245\344\274\246\346\257\224\344\272\232-\346\257\224\347\264\242", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("huobi", "\345\215\260\345\272\246-\345\215\242\346\257\224", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("huobi", "\346\254\247\346\264\262-\346\254\247\345\205\203", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("huobi", "\346\227\245\346\234\254-\346\227\245\345\205\203", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("huobi", "\345\212\240\346\213\277\345\244\247-\345\205\203", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("huobi", "\351\230\277\346\240\271\345\273\267-\346\257\224\347\264\242", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("huobi", "\351\246\231\346\270\257-\346\270\257\345\205\203", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("huobi", "\345\217\260\346\271\276-\346\226\260\345\217\260\345\270\201", nullptr));

        label_4->setText(QCoreApplication::translate("huobi", "1 \344\270\255\345\233\275-\344\272\272\346\260\221\345\270\201 = 1 \344\270\255\345\233\275-\344\272\272\346\260\221\345\270\201", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("huobi", "\344\270\255\345\233\275-\344\272\272\346\260\221\345\270\201", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("huobi", "\347\276\216\345\233\275-\347\276\216\345\205\203", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("huobi", "\345\223\245\344\274\246\346\257\224\344\272\232-\346\257\224\347\264\242", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("huobi", "\345\215\260\345\272\246-\345\215\242\346\257\224", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("huobi", "\346\254\247\346\264\262-\346\254\247\345\205\203", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("huobi", "\346\227\245\346\234\254-\346\227\245\345\205\203", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("huobi", "\345\212\240\346\213\277\345\244\247-\345\205\203", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("huobi", "\351\230\277\346\240\271\345\273\267-\346\257\224\347\264\242", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("huobi", "\351\246\231\346\270\257-\346\270\257\345\205\203", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("huobi", "\345\217\260\346\271\276-\346\226\260\345\217\260\345\270\201", nullptr));

        pushButton->setText(QCoreApplication::translate("huobi", "0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("huobi", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("huobi", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("huobi", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("huobi", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("huobi", "5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("huobi", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("huobi", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("huobi", "8", nullptr));
        pushButton_10->setText(QCoreApplication::translate("huobi", "9", nullptr));
        pushButton_11->setText(QCoreApplication::translate("huobi", "CE", nullptr));
        pushButton_12->setText(QCoreApplication::translate("huobi", "<-", nullptr));
        pushButton_13->setText(QCoreApplication::translate("huobi", ".", nullptr));
        lineEdit->setText(QCoreApplication::translate("huobi", "0", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("huobi", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class huobi: public Ui_huobi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUOBI_H
