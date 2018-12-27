#include "anapencere.h"
#include "ui_anapencere.h"

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

void AnaPencere::on_pushButtonSayiUret_clicked()
{
   ui->listWidgetRastgele->clear();

    for(int i=0;i<10;i++){
        int sayi=qrand()%99+1;
        ui->listWidgetRastgele->addItem(QString::number(sayi));
        sayiListesi.append(sayi);
    }
}

void AnaPencere::on_pushButtonSirala_clicked()
{   ui->listWidgetSirali->clear();

    qSort(sayiListesi.begin(),sayiListesi.end());
     for(int i=0;i<10;i++){
         ui->listWidgetSirali->addItem(QString::number(sayiListesi[i]));
     }
     sayiListesi.clear();
}
