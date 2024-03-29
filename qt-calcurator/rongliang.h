#ifndef RONGLIANG_H
#define RONGLIANG_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class rongliang;
}

class rongliang : public QWidget
{
    Q_OBJECT

public:
    explicit rongliang(QWidget *parent = nullptr);
    ~rongliang();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_comboBox_activated(const QString &arg1);

    void on_comboBox_2_activated(const QString &arg1);

    void on_pushButton_10_clicked();

    void on_doubleSpinBox_textChanged(const QString &arg1);

    void on_pushButton_13_clicked();

private:
    Ui::rongliang *ui;
    QLabel *resultLabel;

    double calc();

    void input(QString num);
};

#endif // RONGLIANG_H
