#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QColor>
#include <vector>
#include <iostream>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    QColor background;
    std::vector<int> valores;
    std::vector<int> tempo;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void setColor(int r, int g, int b);
    void load(std::vector<long> tempoatt, std::vector<int> valoresatt);
};

#endif // PLOTTER_H
