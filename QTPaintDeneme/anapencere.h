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

private:
    Ui::anaPencere *ui;
};

#endif // ANAPENCERE_H
