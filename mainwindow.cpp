#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //set the color of the main windows
    MainSetColor();

    //set the color of push button
    BPSetColor();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::MainSetColor(void)
{
    setStyleSheet(MAIN_BACK_GROUND_COLOR);
}

void MainWindow::BPSetColor(void)
{
   if(_checked)
   {
       ui->BP_Green->setStyleSheet(BP_BACK_GROUND_COLOR_GREEN
                                   BP_BACK_GROUND_IMAGE_OPEN);
   }
   else
   {
       ui->BP_Green->setStyleSheet(BP_BACK_GROUND_COLOR_RED
                                   BP_BACK_GROUND_IMAGE_OPEN);
   }
}

void MainWindow::on_BP_Green_pressed()
{
    _checked = _checked == true ? false : true;
    BPSetColor();
}
