#include "anapencere.h"
#include "ui_anapencere.h"

anaPencere::anaPencere(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::anaPencere)
{
    ui->setupUi(this);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->label_2->setVisible(false);
    ui->lineEdit->setVisible(false);

}

anaPencere::~anaPencere()
{
    delete ui;
}

void anaPencere::on_pushButton_clicked()
{
    ui->pushButton_2->setVisible(true);
    ui->pushButton_3->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->label_2->setVisible(true);
    ui->lineEdit->setVisible(true);
    ui->label->setVisible(false);
    ui->pushButton->setVisible(false);
    sayi=qrand()%(maxSayi-minSayi+1)+minSayi;
    ui->lineEdit->setText(QString::number(sayi));

}

void anaPencere::on_pushButton_4_clicked()
{
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label->setVisible(true);
    ui->lineEdit->setVisible(true);
    ui->pushButton->setVisible(true);
}

void anaPencere::on_pushButton_2_clicked()
{
    minSayi=sayi;
    sayi=qrand()%(maxSayi-minSayi+1)+minSayi;
    ui->lineEdit->setText(QString::number(sayi));

}
