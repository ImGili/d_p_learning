/*
 * @Author: ImGili
 * @Description: 
 */
#include"calculator.h"
#include<iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();
    return a.exec();
}
