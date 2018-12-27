#include "widget.h"
#include "ui_widget.h"

#include <QString>
#include<QDebug>
#include <iostream>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    try {
        if(ui->lineEditSayi->text()!=""){
            int sayi=ui->lineEditSayi->text().toInt();
            qDebug() << sayi;
            if(sayi%2==0){
                ui->listWidgetCift->addItem(ui->lineEditSayi->text());
            }else{
                ui->listWidgetTek->addItem(ui->lineEditSayi->text());
            }
        }
    } catch (int i) {
        qDebug()<< i << "Hatası";
    }

}

void Widget::on_pushButton_2_clicked()
{
    try {
        int sayi1=ui->listWidgetTek->currentItem()->text().toInt();
        int sayi2=ui->listWidgetCift->currentItem()->text().toInt();

        ui->lineEdit->setText(QString::number(sayi1+sayi2));

    } catch (int i) {
        qDebug() << i <<"Hata Oluştu";
    }


}
