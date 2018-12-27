#ifndef ANAPENCERE_H
#define ANAPENCERE_H

#include <QWidget>

namespace Ui {
class anaPencere;
}

class anaPencere : public QWidget
{
    Q_OBJECT

public:
    explicit anaPencere(QWidget *parent = nullptr);
    ~anaPencere();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::anaPencere *ui;
    int minSayi=0;
    int maxSayi=100;
    int sayi=0;
};

#endif // ANAPENCERE_H
