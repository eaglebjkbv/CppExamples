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
