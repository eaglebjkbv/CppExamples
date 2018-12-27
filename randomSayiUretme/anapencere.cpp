#include "anapencere.h"
#include "ui_anapencere.h"
#include <QString>

AnaPencere::AnaPencere(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnaPencere)
{
    ui->setupUi(this);
}

AnaPencere::~AnaPencere()
{
    delete ui;
}

void AnaPencere::on_pushButton_clicked()
{
    ui->listWidgetSayilar->clear();
    for(int i=0;i<10;i++){
        int sayi=qrand()%99+1;
        ui->listWidgetSayilar->addItem(QString::number(sayi));
    }
}

void AnaPencere::on_pushButton_2_clicked()
{
    ui->listWidgetSecilen->clear();
    int sayi=0;
    for(int i=0;i<10;i++){
        sayi=ui->listWidgetSayilar->item(i)->text().toInt();
        if(sayi%2!=0){
            ui->listWidgetSecilen->addItem(ui->listWidgetSayilar->item(i)->text());
        }
    }
}

void AnaPencere::on_pushButton_3_clicked()
{
    ui->listWidgetSecilen->clear();
    int sayi=0;
    for(int i=0;i<10;i++){
        sayi=ui->listWidgetSayilar->item(i)->text().toInt();
        if(sayi%2==0){
            ui->listWidgetSecilen->addItem(ui->listWidgetSayilar->item(i)->text());
        }
    }
}

void AnaPencere::on_listWidgetSayilar_itemClicked(QListWidgetItem *item)
{
    ui->listWidgetSec->addItem(item->text());
}
