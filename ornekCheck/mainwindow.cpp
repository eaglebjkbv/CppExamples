#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("CheckBox Örneği");
    toplam=0;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    toplam=0;
    if(ui->checkBoxHemogram->isChecked()){
        toplam+=10;
    }
    if(ui->checkBoxTSH->isChecked()){
        toplam+=30;
    }
    if(ui->checkBoxT4->isChecked()){
        toplam+=10;
    }
    if(ui->checkBoxT3->isChecked()){
        toplam+=10;
    }
    if(ui->checkBoxFilogram->isChecked()){
        toplam+=10;
    }
    if(ui->checkBoxHGB->isChecked()){
        toplam+=30;
    }
    ui->lineEditToplam->setText(QString::number(toplam));

}

void MainWindow::on_checkBoxHemogram_toggled(bool checked)
{
    if(checked){
        toplam+=10;
    }else{
        toplam-=10;
    }
    ui->lineEditToplam->setText(QString::number(toplam));
}

void MainWindow::on_checkBoxTSH_toggled(bool checked)
{
    if(checked){
        toplam+=30;
    }else{
        toplam-=30;
    }
    ui->lineEditToplam->setText(QString::number(toplam));
}

void MainWindow::on_checkBoxT4_toggled(bool checked)
{
    if(checked){
        toplam+=10;
    }else{
        toplam-=10;
    }
    ui->lineEditToplam->setText(QString::number(toplam));
}

void MainWindow::on_checkBoxT3_toggled(bool checked)
{
    if(checked){
        toplam+=10;
    }else{
        toplam-=10;
    }
    ui->lineEditToplam->setText(QString::number(toplam));
}

void MainWindow::on_checkBoxFilogram_toggled(bool checked)
{
    if(checked){
        toplam+=10;
    }else{
        toplam-=10;
    }
    ui->lineEditToplam->setText(QString::number(toplam));
}

void MainWindow::on_checkBoxHGB_toggled(bool checked)
{
    if(checked){
        toplam+=30;
    }else{
        toplam-=30;
    }
    ui->lineEditToplam->setText(QString::number(toplam));
}
