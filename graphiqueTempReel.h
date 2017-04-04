#ifndef GRAPHIQUETEMPREEL_H
#define GRAPHIQUETEMPREEL_H

#include <QWidget>

namespace Ui {
class GraphiqueTempReel;
}

class GraphiqueTempReel : public QWidget
{
    Q_OBJECT

public:
    explicit GraphiqueTempReel(QWidget *parent = 0);
    ~GraphiqueTempReel();

private:
    Ui::GraphiqueTempReel *ui;
};

#endif // GRAPHIQUETEMPREEL_H
