#include "widget.h"
#include "ui_widget.h"

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

void Widget::on_comboBoxIller_activated(const QString &arg1)
{
    QString iller[10]={"İZMİR","AYDIN","DENİZLİ"};
    QString izmirIlceler[3]={"BAYRAKLI","BORNOVA","KONAK"};
    QString aydinIlceler[3]={"GERMENCIK","INCIRLOVA","SÖKE"};
    QString denizliIlceler[3]={"ACIPAYAM","BULDAN","ÇAL"};


    ui->comboBoxIlceler->clear();
    if(ui->comboBoxIller->currentText()==iller[0]){

        for(QString ilce:izmirIlceler){
            ui->comboBoxIlceler->addItem(ilce);
        }
    }else if(ui->comboBoxIller->currentText()==iller[1]){

         for(QString ilce:aydinIlceler){
            ui->comboBoxIlceler->addItem(ilce);
         }
     }else  if(ui->comboBoxIller->currentText()==iller[2]){

                for(QString ilce:denizliIlceler){
                    ui->comboBoxIlceler->addItem(ilce);
         }
    }

}

