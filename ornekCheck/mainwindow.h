#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int toplam;

private slots:
    void on_pushButton_clicked();

    void on_checkBoxHemogram_toggled(bool checked);

    void on_checkBoxTSH_toggled(bool checked);

    void on_checkBoxT4_toggled(bool checked);

    void on_checkBoxT3_toggled(bool checked);

    void on_checkBoxFilogram_toggled(bool checked);

    void on_checkBoxHGB_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
