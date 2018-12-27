#include "anapencere.h"
#include "ui_anapencere.h"

anaPencere::anaPencere(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::anaPencere)
{
    ui->setupUi(this);
}

anaPencere::~anaPencere()
{
    delete ui;
}
