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
    setStyleSheet("background-color: rgb(170, 170, 170);");
}

void MainWindow::BPSetColor(void)
{
    ui->BP_Green->setStyleSheet("background-color:rgba(255, 255, 127, 50);"
                                "image: url(:/images/Images/folder.png);");


//    ui->BP_Green->setStyleSheet("background-color: "
//                                "qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 "
//                                "rgba(0, 0, 0, 255), stop:0.55 "
//                                "rgba(235, 148, 61, 255), stop:0.98 "
//                                "rgba(0, 0, 0, 255), stop:1 "
//                                "rgba(0, 0, 0, 0));");
//    ui->BP_Green->setStyleSheet("background-image: url(:/images/Images/folder.png);");
}

void MainWindow::on_BP_Green_released()
{

//    _checked = _checked == true ? false : true;
//    if(_checked)
//    {
//        ui->BP_Green->setStyleSheet("background-color: "
//                                    "qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 "
//                                    "rgba(0, 0, 0, 255), stop:0.55 "
//                                    "rgba(77, 225, 124, 255), stop:0.98 "
//                                    "rgba(0, 0, 0, 255), stop:1 "
//                                    "rgba(0, 0, 0, 0));");
//    }
//    else
//    {
//        ui->BP_Green->setStyleSheet("background-color: "
//                                    "qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 "
//                                    "rgba(0, 0, 0, 255), stop:0.55 "
//                                    "rgba(235, 148, 61, 255), stop:0.98 "
//                                    "rgba(0, 0, 0, 255), stop:1 "
//                                    "rgba(0, 0, 0, 0));");
//    }
}

void MainWindow::on_BP_Green_toggled(bool _checked)
{
//    if(_checked)
//    {
//        ui->BP_Green->setStyleSheet("background-color: red");
////                                    "qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 "
////                                    "rgba(0, 0, 0, 255), stop:0.55 "
////                                    "rgba(77, 225, 124, 255), stop:0.98 "
////                                    "rgba(0, 0, 0, 255), stop:1 "
////                                    "rgba(0, 0, 0, 0));");
//    }
//    else
//    {
//        ui->BP_Green->setStyleSheet("background-color: green");
////                                    "qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 "
////                                    "rgba(0, 0, 0, 255), stop:0.55 "
////                                    "rgba(235, 148, 61, 255), stop:0.98 "
////                                    "rgba(0, 0, 0, 255), stop:1 "
////                                    "rgba(0, 0, 0, 0));");
//    }
}

void MainWindow::on_BP_Green_clicked()
{
    // _checked = _checked == true ? false : true;
}

void MainWindow::on_BP_Green_pressed()
{
     _checked = _checked == true ? false : true;
    if(ui->BP_Green->isChecked())
    {
        ui->BP_Green->setStyleSheet("background-color:rgba(100, 0, 0, 50);"
                                    "image: url(:/images/Images/folder.png);");
    }
    else
    {
        ui->BP_Green->setStyleSheet("background-color:rgba(255, 255, 127, 50);"
                                    "image: url(:/images/Images/folder.png);");
    }
}
