#include "biaozhun.h"
#include "ui_biaozhun.h"
#include <math.h>
#include <QJSEngine>

biaozhun::biaozhun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::biaozhun)
{
    ui->setupUi(this);
    isFinish = false; // 初始化 isFinish 为 false
}

biaozhun::~biaozhun()
{
    delete ui;
}

void biaozhun::input(QString num)
{
    if (isFinish) {

        ui->textBrowser_2->clear();
        isFinish = false;
    }

    str = str + num;
    ui->textBrowser->setText(str);
}

void biaozhun::shuangMu(QString fuhao)
{
    if (ui->textBrowser_2->document()->toPlainText() == "") {

        ui->textBrowser_2->setText(str + fuhao);
        ui->textBrowser->setText("");
        str = "";
    } else {

        QString shang = ui->textBrowser_2->document()->toPlainText();
        ui->textBrowser_2->setText(shang + str + fuhao);
        ui->textBrowser->setText("");
        str = "";
    }
}

void biaozhun::on_pushButton_clicked()
{
    input("1");
}

void biaozhun::on_pushButton_2_clicked()
{
    input("2");
}

void biaozhun::on_pushButton_3_clicked()
{
    input("3");
}

void biaozhun::on_pushButton_4_clicked()
{
    input("4");
}

void biaozhun::on_pushButton_5_clicked()
{
    input("5");
}

void biaozhun::on_pushButton_6_clicked()
{
    input("6");
}

void biaozhun::on_pushButton_7_clicked()
{
    input("7");
}

void biaozhun::on_pushButton_8_clicked()
{
    input("8");
}

void biaozhun::on_pushButton_9_clicked()
{
    input("9");
}

void biaozhun::on_pushButton_12_clicked()
{
    input("0");
}

void biaozhun::on_pushButton_10_clicked()
{
    shuangMu("+");
}

void biaozhun::on_pushButton_11_clicked()
{
    shuangMu("-");
}

void biaozhun::on_pushButton_13_clicked()
{
    shuangMu("*");
}

void biaozhun::on_pushButton_14_clicked()
{
    shuangMu("/");
}

void biaozhun::on_pushButton_15_clicked()
{
    input(".");
}

void biaozhun::on_pushButton_16_clicked()
{
    str = str.mid(0, str.size() - 1);
    ui->textBrowser->setText(str);
}

void biaozhun::on_pushButton_17_clicked()
{
    str = "";
    ui->textBrowser->setText(str);
    ui->textBrowser_2->setText("");
}

void biaozhun::on_pushButton_18_clicked()
{
    if (ui->textBrowser_2->document()->toPlainText() == "") {
        // 如果 textBrowser_2 为空，表示还没有进行过等于号计算
        ui->textBrowser_2->setText(str);
        ui->textBrowser->setText("");
        str = "";
        isFinish = true; // 计算完成，isFinish 设置为 true
    } else {
        // 如果 textBrowser_2 中已经有计算结果，点击等于号进行计算，并在 textBrowser_2 中显示结果
        ui->textBrowser_2->setText(ui->textBrowser_2->document()->toPlainText() + str);
        QJSEngine scriptEngin;
        QJSValue scripVal = scriptEngin.evaluate(ui->textBrowser_2->document()->toPlainText()).toString();
        QString stra = scripVal.toString();
        ui->textBrowser_2->setText(stra);
        ui->textBrowser->setText("");
        str = "";
        isFinish = true;
    }
}

void biaozhun::on_textBrowser_textChanged()
{
    // 可以添加需要的文本变化时的处理
}

void biaozhun::on_pushButton_22_clicked()
{
    shuangMu("%");
}

void biaozhun::on_pushButton_24_clicked()
{
    if (str.startsWith("+", Qt::CaseInsensitive)) {
        str.replace(0, 1, "-");
    } else if (str.startsWith("-", Qt::CaseInsensitive)) {
        str.replace(0, 1, "+");
    } else {
        str = "-" + str;
    }
    ui->textBrowser->setText(str);
}

void biaozhun::on_pushButton_25_clicked()
{
    if (ui->textBrowser_2->document()->toPlainText() == "") {

        ui->textBrowser_2->setText(str);
        ui->textBrowser->setText("");
        str = "";
        isFinish = true;
    } else {

        ui->textBrowser_2->setText(ui->textBrowser_2->document()->toPlainText() + str);
        QJSEngine scriptEngin;
        QJSValue scripVal = scriptEngin.evaluate(ui->textBrowser_2->document()->toPlainText()).toString();
        QString stra = scripVal.toString();
        ui->textBrowser_2->setText(stra);
        ui->textBrowser->setText("");
        str = "";
        isFinish = true;
    }
}

void biaozhun::on_pushButton_23_clicked()
{
    if (ui->textBrowser->document()->toPlainText() != "") {
        double num = ui->textBrowser->document()->toPlainText().toDouble();
        num = 1 / num;
        ui->textBrowser->setText(QString::number(num));
        str = QString::number(num);
    } else if (ui->textBrowser_2->document()->toPlainText() != "") {
        str = ui->textBrowser_2->document()->toPlainText();
        if (str.endsWith("+", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        } else if (str.endsWith("-", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        } else if (str.endsWith("*", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        } else if (str.endsWith("/", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        }
        ui->textBrowser_2->setText(str);
        str = "";
        QJSEngine scriptEngin;
        QJSValue scripVal = scriptEngin.evaluate(ui->textBrowser_2->document()->toPlainText()).toString();
        QString stra = scripVal.toString();
        double num = stra.toDouble();
        num = 1 / num;
        ui->textBrowser_2->setText(QString::number(num));
    }
}

void biaozhun::on_pushButton_26_clicked()
{
    if (ui->textBrowser->document()->toPlainText() != "") {
        double num = ui->textBrowser->document()->toPlainText().toDouble();
        num = num * num;
        ui->textBrowser->setText(QString::number(num));
        str = QString::number(num);
    } else if (ui->textBrowser_2->document()->toPlainText() != "") {
        str = ui->textBrowser_2->document()->toPlainText();
        if (str.endsWith("+", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        } else if (str.endsWith("-", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        } else if (str.endsWith("*", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        } else if (str.endsWith("/", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        }
        ui->textBrowser_2->setText(str);
        str = "";
        QJSEngine scriptEngin;
        QJSValue scripVal = scriptEngin.evaluate(ui->textBrowser_2->document()->toPlainText()).toString();
        QString stra = scripVal.toString();
        double num = stra.toDouble();
        num = num * num;
        ui->textBrowser_2->setText(QString::number(num));
    }
}

void biaozhun::on_pushButton_27_clicked()
{
    if (ui->textBrowser->document()->toPlainText() != "") {
        double num = ui->textBrowser->document()->toPlainText().toDouble();
        num = sqrt(num);
        ui->textBrowser->setText(QString::number(num));
        str = QString::number(num);
    } else if (ui->textBrowser_2->document()->toPlainText() != "") {
        str = ui->textBrowser_2->document()->toPlainText();
        if (str.endsWith("+", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        } else if (str.endsWith("-", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        } else if (str.endsWith("*", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        } else if (str.endsWith("/", Qt::CaseInsensitive)) {
            str.replace(str.length() - 1, 1, "");
        }
        ui->textBrowser_2->setText(str);
        str = "";
        QJSEngine scriptEngin;
        QJSValue scripVal = scriptEngin.evaluate(ui->textBrowser_2->document()->toPlainText()).toString();
        QString stra = scripVal.toString();
        double num = stra.toDouble();
        num = sqrt(num);
        ui->textBrowser_2->setText(QString::number(num));
    }
}
