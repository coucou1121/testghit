#include "graphiqueTempReel.h"
#include "ui_graphiqueTempReel.h"

GraphiqueTempReel::GraphiqueTempReel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraphiqueTempReel)
{
    ui->setupUi(this);
}

GraphiqueTempReel::~GraphiqueTempReel()
{
    delete ui;
}
