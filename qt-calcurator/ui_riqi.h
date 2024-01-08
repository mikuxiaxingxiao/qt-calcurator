/********************************************************************************
** Form generated from reading UI file 'riqi.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIQI_H
#define UI_RIQI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_riqi
{
public:
    QWidget *centralWidget;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QLabel *label_2;
    QLabel *label_4;
    QDateEdit *dateEdit_3;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QSpinBox *spinBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QSpinBox *spinBox_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_13;
    QSpinBox *spinBox_3;

    void setupUi(QWidget *riqi)
    {
        if (riqi->objectName().isEmpty())
            riqi->setObjectName("riqi");
        riqi->resize(641, 548);
        riqi->setMaximumSize(QSize(1000, 10000));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setBold(false);
        font.setItalic(false);
        riqi->setFont(font);
        riqi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #F2F2F2; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"border: 1px solid #C3C3C3; /* \350\256\276\347\275\256\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"padding: 8px 16px; /* \350\260\203\346\225\264\345\206\205\350\276\271\350\267\235 */\n"
"font-family: \"Segoe UI\", Arial, sans-serif; /* \344\275\277\347\224\250Windows\350\256\241\347\256\227\345\231\250\345\270\270\350\247\201\347\232\204\345\255\227\344\275\223 */\n"
"font-size: 14pt; /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"color: #333333; /* \350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #E6E6E6; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #D9D9D9; /* \346\214\211\344\270\213\346\227\266\350\256"
                        "\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"background-color: #F2F2F2; /* \347\246\201\347\224\250\346\227\266\350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"color: #B2B2B2; /* \347\246\201\347\224\250\346\227\266\350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"\n"
"\n"
"QRadioButton {\n"
"spacing: 5px; /* \350\260\203\346\225\264\346\226\207\346\234\254\345\222\214\351\200\211\346\213\251\346\241\206\344\271\213\351\227\264\347\232\204\351\227\264\350\267\235 */\n"
"color: #333333; /* \350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"width: 5px; /* \350\256\276\347\275\256\351\200\211\346\213\251\346\241\206\347\232\204\345\256\275\345\272\246 */\n"
"height: 5rgb(240, 240, 240)px; /* \350\256\276\347\275\256\351\200\211\346\213\251\346\241\206\347\232\204\351\253\230\345\272\246 */\n"
"border: 2px soli"
                        "d #0078D4; /* \350\256\276\347\275\256\351\200\211\346\213\251\346\241\206\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"background-color: #0078D4; /* \350\256\276\347\275\256\351\200\211\344\270\255\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"border: 2px solid #0078D4; /* \350\256\276\347\275\256\351\200\211\344\270\255\346\227\266\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QRadioButton:hover {\n"
"color: #0078D4; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"\n"
"QDateEdit {\n"
"background-color: white;\n"
"border: 1px solid #d9d9d9;\n"
"padding: 5px;\n"
"color: black;\n"
"selection-background-color: #3399ff;\n"
"selection-color: white;\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"width: 20px;\n"
"}\n"
"\n"
"\n"
"\n"
"QDateEdit QCalendarWidget {\n"
"background-color: "
                        "white;\n"
"color: black;\n"
"border: 1px solid #d9d9d9;\n"
"selection-background-color: #3399ff;\n"
"selection-color: white;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton {\n"
"color: black;\n"
"background-color: white;\n"
"border: 1px solid #d9d9d9;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton:hover {\n"
"background-color: #e6f7ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton::hover {\n"
"background-color: #e6f7ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QWidget {\n"
"alternate-background-color: #f0f0f0;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView {\n"
"background-color: white;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView::item:hover {\n"
"color: black;\n"
"background-color: #3399ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView::item:selected {\n"
"color: white;\n"
"background-color: #3399ff;\n"
"}\n"
"\n"
"\n"
"	\n"
"\n"
"\n"
""));
        centralWidget = new QWidget(riqi);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setGeometry(QRect(0, -10, 411, 571));
        centralWidget->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 13pt; /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}"));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(20, 140, 121, 41));
        dateEdit->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"background-color: white;\n"
"border: 1px solid #d9d9d9;\n"
"padding: 5px;\n"
"color: black;\n"
"selection-background-color: #3399ff;\n"
"selection-color: white;\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"width: 20px;\n"
"}\n"
"\n"
"\n"
"\n"
"QDateEdit QCalendarWidget {\n"
"background-color: white;\n"
"color: black;\n"
"border: 1px solid #d9d9d9;\n"
"selection-background-color: #3399ff;\n"
"selection-color: white;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton {\n"
"color: black;\n"
"background-color: white;\n"
"border: 1px solid #d9d9d9;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton:hover {\n"
"background-color: #e6f7ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton::hover {\n"
"background-color: #e6f7ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QWidget {\n"
"alternate-background-color: #f0f0f0;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView {\n"
"background-color: white;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView::item:hove"
                        "r {\n"
"color: black;\n"
"background-color: #3399ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView::item:selected {\n"
"color: white;\n"
"background-color: #3399ff;\n"
"}\n"
""));
        dateEdit->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(16, 0, 0)));
        dateEdit_2 = new QDateEdit(centralWidget);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(20, 240, 121, 41));
        dateEdit_2->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"background-color: white;\n"
"border: 1px solid #d9d9d9;\n"
"padding: 5px;\n"
"color: black;\n"
"selection-background-color: #3399ff;\n"
"selection-color: white;\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"width: 20px;\n"
"}\n"
"\n"
"\n"
"\n"
"QDateEdit QCalendarWidget {\n"
"background-color: white;\n"
"color: black;\n"
"border: 1px solid #d9d9d9;\n"
"selection-background-color: #3399ff;\n"
"selection-color: white;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton {\n"
"color: black;\n"
"background-color: white;\n"
"border: 1px solid #d9d9d9;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton:hover {\n"
"background-color: #e6f7ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton::hover {\n"
"background-color: #e6f7ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QWidget {\n"
"alternate-background-color: #f0f0f0;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView {\n"
"background-color: white;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView::item:hove"
                        "r {\n"
"color: black;\n"
"background-color: #3399ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView::item:selected {\n"
"color: white;\n"
"background-color: #3399ff;\n"
"}\n"
""));
        dateEdit_2->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(16, 0, 0)));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 141, 21));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 50, 141, 21));
        dateEdit_3 = new QDateEdit(centralWidget);
        dateEdit_3->setObjectName("dateEdit_3");
        dateEdit_3->setGeometry(QRect(220, 140, 121, 41));
        dateEdit_3->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"background-color: white;\n"
"border: 1px solid #d9d9d9;\n"
"padding: 5px;\n"
"color: black;\n"
"selection-background-color: #3399ff;\n"
"selection-color: white;\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"width: 20px;\n"
"}\n"
"\n"
"\n"
"\n"
"QDateEdit QCalendarWidget {\n"
"background-color: white;\n"
"color: black;\n"
"border: 1px solid #d9d9d9;\n"
"selection-background-color: #3399ff;\n"
"selection-color: white;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton {\n"
"color: black;\n"
"background-color: white;\n"
"border: 1px solid #d9d9d9;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton:hover {\n"
"background-color: #e6f7ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QToolButton::hover {\n"
"background-color: #e6f7ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QWidget {\n"
"alternate-background-color: #f0f0f0;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView {\n"
"background-color: white;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView::item:hove"
                        "r {\n"
"color: black;\n"
"background-color: #3399ff;\n"
"}\n"
"\n"
"QDateEdit QCalendarWidget QAbstractItemView::item:selected {\n"
"color: white;\n"
"background-color: #3399ff;\n"
"}\n"
""));
        dateEdit_3->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(8, 0, 0)));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 110, 81, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 220, 91, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 340, 91, 78));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(220, 90, 96, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName("radioButton");
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(220, 340, 181, 78));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName("label_14");

        verticalLayout_2->addWidget(label_14);

        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName("label_15");

        verticalLayout_2->addWidget(label_15);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(220, 220, 146, 68));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        spinBox = new QSpinBox(layoutWidget3);
        spinBox->setObjectName("spinBox");

        verticalLayout_3->addWidget(spinBox);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName("label_6");

        verticalLayout_4->addWidget(label_6);

        spinBox_2 = new QSpinBox(layoutWidget3);
        spinBox_2->setObjectName("spinBox_2");

        verticalLayout_4->addWidget(spinBox_2);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName("label_13");

        verticalLayout_5->addWidget(label_13);

        spinBox_3 = new QSpinBox(layoutWidget3);
        spinBox_3->setObjectName("spinBox_3");

        verticalLayout_5->addWidget(spinBox_3);


        horizontalLayout_2->addLayout(verticalLayout_5);


        retranslateUi(riqi);

        QMetaObject::connectSlotsByName(riqi);
    } // setupUi

    void retranslateUi(QWidget *riqi)
    {
        riqi->setWindowTitle(QCoreApplication::translate("riqi", "\346\213\211\350\203\257\350\256\241\347\256\227\345\231\250", nullptr));
        label_2->setText(QCoreApplication::translate("riqi", "\346\227\245\346\234\237\344\271\213\351\227\264\347\233\270\351\232\224\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("riqi", "\346\267\273\345\212\240\346\210\226\345\207\217\345\216\273\345\244\251\346\225\260", nullptr));
        label_7->setText(QCoreApplication::translate("riqi", "\345\274\200\345\247\213\346\227\245\346\234\237", nullptr));
        label_8->setText(QCoreApplication::translate("riqi", "\347\273\223\346\235\237\346\227\245\346\234\237", nullptr));
        label_3->setText(QCoreApplication::translate("riqi", "\345\267\256\345\200\274", nullptr));
        label->setText(QCoreApplication::translate("riqi", "0\345\244\251", nullptr));
        radioButton->setText(QCoreApplication::translate("riqi", "\346\267\273\345\212\240", nullptr));
        radioButton_2->setText(QCoreApplication::translate("riqi", "\345\207\217\345\216\273", nullptr));
        label_14->setText(QCoreApplication::translate("riqi", "\346\227\245\346\234\237", nullptr));
        label_15->setText(QCoreApplication::translate("riqi", "2024\345\271\2641\346\234\2101\346\227\245", nullptr));
        label_5->setText(QCoreApplication::translate("riqi", "\345\271\264", nullptr));
        label_6->setText(QCoreApplication::translate("riqi", "\346\234\210", nullptr));
        label_13->setText(QCoreApplication::translate("riqi", "\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class riqi: public Ui_riqi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIQI_H
