#include"calculator.h"
#include "ui_calculator.h"

#include <iostream>

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    connect(ui->b0, &QPushButton::toggled, this, &Calculator::on_b0_clicked);
    connect(ui->b1, &QPushButton::toggled, this, &Calculator::on_b1_clicked);
    connect(ui->b2, &QPushButton::toggled, this, &Calculator::on_b2_clicked);
    connect(ui->b3, &QPushButton::toggled, this, &Calculator::on_b3_clicked);
    connect(ui->b4, &QPushButton::toggled, this, &Calculator::on_b4_clicked);
    connect(ui->b5, &QPushButton::toggled, this, &Calculator::on_b5_clicked);
    connect(ui->b6, &QPushButton::toggled, this, &Calculator::on_b6_clicked);
    connect(ui->b7, &QPushButton::toggled, this, &Calculator::on_b7_clicked);
    connect(ui->b8, &QPushButton::toggled, this, &Calculator::on_b8_clicked);
    connect(ui->b9, &QPushButton::toggled, this, &Calculator::on_b9_clicked);

    connect(ui->bac, &QPushButton::toggled, this, &Calculator::on_bac_clicked);

    connect(ui->bj, &QPushButton::toggled, this, &Calculator::on_bj_clicked);
    connect(ui->bm, &QPushButton::toggled, this, &Calculator::on_bm_clicked);
    connect(ui->bx, &QPushButton::toggled, this, &Calculator::on_bx_clicked);
    connect(ui->bc, &QPushButton::toggled, this, &Calculator::on_bc_clicked);
    connect(ui->be, &QPushButton::toggled, this, &Calculator::on_be_clicked);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_b0_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 0;
    setCurrentNumber(number);
    updateNumber();
}
void Calculator::on_b1_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 1;
    setCurrentNumber(number);
    updateNumber();
}
void Calculator::on_b2_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 2;
    setCurrentNumber(number);
    updateNumber();
}
void Calculator::on_b3_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 3;
    setCurrentNumber(number);
    updateNumber();
}
void Calculator::on_b4_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 4;
    setCurrentNumber(number);
    updateNumber();
}
void Calculator::on_b5_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 5;
    setCurrentNumber(number);
    updateNumber();
}
void Calculator::on_b6_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 6;
    setCurrentNumber(number);
    updateNumber();
}
void Calculator::on_b7_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 7;
    setCurrentNumber(number);
    updateNumber();
}
void Calculator::on_b8_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 8;
    setCurrentNumber(number);
    updateNumber();
}
void Calculator::on_b9_clicked()
{
    float number = getCurrentNumber();
    number = number*10 + 9;
    setCurrentNumber(number);
    updateNumber();
}


void Calculator::on_bj_clicked()
{
    if (op != nullptr)
    {
        delete op;
        op = nullptr;
    }
    
    op = OperationFactory('+');
    boperator = true;
    updateNumber();
}
void Calculator::on_bm_clicked()
{
    if (op != nullptr)
    {
        delete op;
        op = nullptr;
    }
    
    op = OperationFactory('-');
    boperator = true;
    updateNumber();
}
void Calculator::on_bx_clicked()
{
    if (op != nullptr)
    {
        delete op;
        op = nullptr;
    }
    
    op = OperationFactory('x');
    boperator = true;
    updateNumber();
}
void Calculator::on_bc_clicked()
{
    if (op != nullptr)
    {
        delete op;
        op = nullptr;
    }
    
    op = OperationFactory('/');
    boperator = true;
    updateNumber();
}
void Calculator::on_be_clicked()
{
    boperator = false;
    op->setNumbers(number1, number2);
    number1 = op->getResult();
    number2 = 0;    
    updateNumber();
}

void Calculator::on_bac_clicked()
{
    number1 = 0;
    number2 = 0;
    updateNumber();
}

#include"cstdio"
void Calculator::updateNumber()
{
    float number = getCurrentNumber();
    char str[255];
    sprintf(str, "%f", number);
    ui->label->setText(str);
}

float Calculator::getCurrentNumber()
{
    return (boperator==false ? number1 : number2);
}
void Calculator::setCurrentNumber(float n)
{
    if (boperator == false)
    {
        number1 = n;
    }
    else
    {
        number2 = n;
    }
    
}