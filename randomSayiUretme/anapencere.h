#ifndef ANAPENCERE_H
#define ANAPENCERE_H

#include <QWidget>
class QListWidgetItem;
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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_listWidgetSayilar_itemClicked(QListWidgetItem *item);

private:
    Ui::AnaPencere *ui;
};

#endif // ANAPENCERE_H
