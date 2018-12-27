#include "anapencere.h"
#include "ui_anapencere.h"

AnaPencere::AnaPencere(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AnaPencere)
{
    ui->setupUi(this);
}

AnaPencere::~AnaPencere()
{
    delete ui;
}

void AnaPencere::on_pushButtonTopla_clicked()
{
    ui->lineEditToplam->setText(ui->lineEditAd->text()+" "+ui->lineEditSoyad->text());
}

void AnaPencere::on_pushButtonTemizle_clicked()
{
     ui->lineEditToplam->clear();
     ui->lineEditSoyad->clear();
     ui->lineEditAd->clear();
}
