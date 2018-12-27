#include "widget.h"
#include "ui_widget.h"

#include <QtSerialPort/QSerialPortInfo>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QList<QSerialPortInfo> com_ports = QSerialPortInfo::availablePorts();
    QSerialPortInfo port;

    foreach(port, com_ports)
    {
        ui->comboBoxSeriPortlar ->addItem(port.portName());
    }
}

Widget::~Widget()
{
    delete ui;
}
