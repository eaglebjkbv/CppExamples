#ifndef ANAPENCERE_H
#define ANAPENCERE_H

#include <QMainWindow>

namespace Ui {
class AnaPencere;
}

class AnaPencere : public QMainWindow
{
    Q_OBJECT

public:
    explicit AnaPencere(QWidget *parent = nullptr);
    ~AnaPencere();

private slots:
    void on_pushButtonTopla_clicked();

    void on_pushButtonTemizle_clicked();

private:
    Ui::AnaPencere *ui;
};

#endif // ANAPENCERE_H
