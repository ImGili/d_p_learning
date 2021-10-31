#pragma once

#include <QWidget>
#include"operation.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Form; }
QT_END_NAMESPACE

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
private slots:
    void on_b0_clicked();
    void on_b1_clicked();
    void on_b2_clicked();
    void on_b3_clicked();
    void on_b4_clicked();
    void on_b5_clicked();
    void on_b6_clicked();
    void on_b7_clicked();
    void on_b8_clicked();
    void on_b9_clicked();
    void on_bac_clicked();
    void on_bj_clicked();
    void on_bm_clicked();
    void on_be_clicked();
    void on_bx_clicked();
    void on_bc_clicked();
private:
    Ui::Form *ui;
    Operation* op = nullptr;
    float number1 = 0;
    float number2 = 0;
    bool boperator = false;
    void updateNumber();
    float getCurrentNumber();
    void setCurrentNumber(float n);
};
