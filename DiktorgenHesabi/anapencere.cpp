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

void AnaPencere::on_pushButtonHesapla_clicked()
{
    int alan=ui->lineEditA->text().toInt()*ui->lineEditB->text().toInt();
    int cevre=(ui->lineEditA->text().toInt()+ui->lineEditB->text().toInt())*2;
    ui->lineEditAlan->setText(QString::number(alan));
    ui->lineEditCevre->setText(QString::number(cevre));

}
