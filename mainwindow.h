#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//main color
#define MAIN_BACK_GROUND_COLOR      "background-color:rgba(176, 176, 176, 255);"
#define BP_BACK_GROUND_COLOR_GREEN  "background-color:rgba(100, 0, 0, 50);"
#define BP_BACK_GROUND_COLOR_RED    "background-color:rgba(255, 255, 127, 50);"

#define BP_BACK_GROUND_IMAGE_OPEN   "image: url(:/images/Images/folder.png);"

//test again
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

    void on_BP_Green_pressed();

private:
    bool _checked = false;
    Ui::MainWindow *ui;
    void BPSetColor(void);
    void MainSetColor(void);
};

#endif // MAINWINDOW_H
