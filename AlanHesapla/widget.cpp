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

void Widget::on_radioButton_toggled(bool checked)
{
    if (checked){
        ui->labelA->setText("Yükseklik");
        ui->labelB->show();
        ui->labelB->setText("Taban Uzunluğu");
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        hepsiniTemizle();
    }
}

void Widget::on_radioButton_2_toggled(bool checked)
{
    if (checked){
        ui->labelA->setText("Kenar Uzunluğu");
        ui->labelB->hide();
        ui->lineEdit_2->hide();
        hepsiniTemizle();
    }
}

void Widget::on_radioButton_3_toggled(bool checked)
{
    if (checked){
        ui->labelA->setText("A Kenar Uzunluğu");
        ui->labelB->show();
        ui->labelB->setText("B Kenar Uzunluğu");
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        hepsiniTemizle();
    }
}

void Widget::on_radioButton_4_toggled(bool checked)
{
    if (checked){
        ui->labelA->setText("Yarıçap");
        ui->labelB->hide();
        ui->lineEdit_2->hide();
        hepsiniTemizle();
    }
}

void Widget::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        int alan=((ui->lineEdit->text()).toInt()*(ui->lineEdit_2->text()).toInt()) /2;
        ui->lineEdit_3->setText(QString::number(alan));
    }
    if(ui->radioButton_2->isChecked()){
        int alan=(ui->lineEdit->text()).toInt()*(ui->lineEdit->text()).toInt();
        ui->lineEdit_3->setText(QString::number(alan));
    }
    if(ui->radioButton_3->isChecked()){
        int alan=(ui->lineEdit->text()).toInt()*(ui->lineEdit_2->text()).toInt();
        ui->lineEdit_3->setText(QString::number(alan));

    }
    if(ui->radioButton_4->isChecked()){
        double alan=(ui->lineEdit->text()).toInt()*(ui->lineEdit->text()).toInt()*3.14;
        ui->lineEdit_3->setText(QString::number(alan));

    }

}
void Widget::hepsiniTemizle(){
     ui->lineEdit->clear();
     ui->lineEdit_2->clear();
     ui->lineEdit_3->clear();
}
