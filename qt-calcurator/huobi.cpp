// huobi.cpp
#include "huobi.h"
#include "ui_huobi.h"
#include <QLineEdit>

huobi::huobi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::huobi)
{
    ui->setupUi(this);


    // 初始化汇率
    exchangeRates["中国-人民币"] = 1.0;
    exchangeRates["美国-美元"] = 0.1572;
        exchangeRates["哥伦比亚-比索"] = 0.0023;
    exchangeRates["印度-卢比"] = 11.25;
        exchangeRates["欧洲-欧元"] = 0.1324;
        exchangeRates["日本-日元"] = 16.89;
        exchangeRates["加拿大-元"] = 0.2031;
        exchangeRates["阿根廷-比索"] = 7.65;
    exchangeRates["香港-港元"] = 1.23;
        exchangeRates["台湾-新台币"] = 4.41;

    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(updateConversion()));
    connect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)), this, SLOT(updateConversion()));
    connect(ui->lineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(updateConversion()));
    connect(ui->lineEdit_2, SIGNAL(textChanged(const QString&)), this, SLOT(updateConversion()));



    ui->comboBox->addItems(exchangeRates.keys());
    ui->comboBox_2->addItems(exchangeRates.keys());

    updateConversion();
}

void huobi::updateConversion()
{
    QString sourceCurrency = ui->comboBox->currentText();
    QString targetCurrency = ui->comboBox_2->currentText();
    double amount = ui->lineEdit->text().toDouble();

    double sourceRate = exchangeRates.value(sourceCurrency, 1.0);
    double targetRate = exchangeRates.value(targetCurrency, 1.0);


    double convertedAmount = (amount / sourceRate) * targetRate;


    ui->label_4->setText(QString("1 %3 = %2 %1").arg(targetCurrency).arg(targetRate).arg(sourceCurrency));

    ui->lineEdit_2->setText(QString::number(convertedAmount, 'f', 6));  // 'f' 表示浮点数，2 表示小数位数

}

huobi::~huobi()
{
    delete ui;
}

void huobi::on_pushButton_clicked()
{
    currentInput += "0";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_2_clicked()
{
    currentInput += "1";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_3_clicked()
{
    currentInput += "2";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_4_clicked()
{
    currentInput += "3";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_5_clicked()
{
    currentInput += "4";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_6_clicked()
{
    currentInput += "5";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_7_clicked()
{
    currentInput += "6";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_8_clicked()
{
    currentInput += "7";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_9_clicked()
{
    currentInput += "8";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_10_clicked()
{
    currentInput += "9";
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_11_clicked()
{

    currentInput = "";
    ui->lineEdit->setText("0");
    ui->lineEdit_2->setText("0");
}

void huobi::on_pushButton_12_clicked()
{

    currentInput.chop(1);
    ui->lineEdit->setText(currentInput);
    ui->lineEdit_2->setText(currentInput);
}

void huobi::on_pushButton_13_clicked()
{

    if (!currentInput.contains("."))
    {
        currentInput += ".";
        ui->lineEdit->setText(currentInput);
        ui->lineEdit_2->setText(currentInput);
    }
}
