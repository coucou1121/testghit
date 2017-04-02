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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_BP_Green_released();

    void on_BP_Green_toggled(bool _checked);

    void on_BP_Green_clicked();

    void on_BP_Green_pressed();

private:
    bool _checked = false;
    Ui::MainWindow *ui;
    void BPSetColor(void);
    void MainSetColor(void);
};

#endif // MAINWINDOW_H
