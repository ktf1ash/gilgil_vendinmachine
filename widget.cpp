#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <stdio.h>
#include <cstdio>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->coffee->setEnabled(false);
    ui->tea->setEnabled(false);
    ui->icetea->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::left(int n){
        QMessageBox msg;

        int a = n/500;
            n = n%500;
        int b = n/100;
            n = n%100;
        int c = n/50;
            n = n%50;
        int d = n/10;

        char str[100];
        std::sprintf(str,"Here is the change : \n 500 : %d\n 100 : %d\n 50 :%d\n 10 : %d\n",a,b,c,d);
        msg.information(0,"Return",str);
}

void Widget::check1(int n){
    if(n-100>=0)
        ui->coffee->setEnabled(true);
    else
        ui->coffee->setEnabled(false);
}

void Widget::check2(int n){
    if(n-150>=0)
        ui->tea->setEnabled(true);
    else
        ui->tea->setEnabled(false);
}

void Widget::check3(int n){
    if(n-200>=0)
        ui->icetea->setEnabled(true);
    else
        ui->icetea->setEnabled(false);
}

void Widget::changeMoney(int n){
    money += n;
    ui->lcdNumber->display(QString::number(money));
    //ui->coffee->setEnabled(); //home work change money enable when
}



void Widget::on_pb10_clicked()
{
    changeMoney(10);
    check1(money);
    check2(money);
    check3(money);
    left(money);
}

void Widget::on_pb50_clicked()
{
    changeMoney(50);
    check1(money);
    check2(money);
    check3(money);
    left(money);
}

void Widget::on_pb100_clicked()
{
    changeMoney(100);
    check1(money);
    check2(money);
    check3(money);
    left(money);
}

void Widget::on_pb500_clicked()
{
    changeMoney(500);
    check1(money);
    check2(money);
    check3(money);
    left(money);
}

void Widget::on_coffee_clicked()
{
    changeMoney(-100);
    check1(money);
    check2(money);
    check3(money);
    left(money);
}

void Widget::on_tea_clicked()
{
    changeMoney(-150);
    check1(money);
    check2(money);
    check3(money);
    left(money);
}

void Widget::on_icetea_clicked()
{
    changeMoney(-200);
    check1(money);
    check2(money);
    check3(money);
    left(money);
}
