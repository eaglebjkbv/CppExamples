#ifndef ANAPENCERE_H
#define ANAPENCERE_H

#include <QWidget>

namespace Ui {
class AnaPencere;
}

class AnaPencere : public QWidget
{
    Q_OBJECT

public:
    explicit AnaPencere(QWidget *parent = nullptr);
    ~AnaPencere();

private slots:
    void on_pushButtonHesapla_clicked();

private:
    Ui::AnaPencere *ui;
};

#endif // ANAPENCERE_H
