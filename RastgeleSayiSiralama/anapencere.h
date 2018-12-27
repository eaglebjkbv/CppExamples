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
    void on_pushButtonSayiUret_clicked();

    void on_pushButtonSirala_clicked();

private:
    Ui::AnaPencere *ui;
    QList<int> sayiListesi;
};

#endif // ANAPENCERE_H
