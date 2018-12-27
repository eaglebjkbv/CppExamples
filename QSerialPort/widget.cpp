#include "widget.h"
#include "ui_widget.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
            qDebug() << "Name : " << info.portName();
            ui->comboBoxSeriPortlar ->addItem(info.portName());

        }





}

Widget::~Widget()
{
    delete ui;
}
