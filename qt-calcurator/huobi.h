// huobi.h

#ifndef HUOBI_H
#define HUOBI_H

#include <QWidget>
#include <QMap>
#include <QLineEdit>

namespace Ui {
class huobi;
}

class huobi : public QWidget
{
    Q_OBJECT

public:
    explicit huobi(QWidget *parent = nullptr);
    ~huobi();

private slots:
    void updateConversion();  // 槽函数，用于更新转换结果

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::huobi *ui;
    QMap<QString, double> exchangeRates;
    QString currentInput;
    QLineEdit* currentLineEdit;


};

#endif // HUOBI_H
