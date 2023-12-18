#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>
#include <QDebug> //qDebug()
#include <QMouseEvent>
#include<algorithm>
#include <QWidget>
#include <vector>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}{
    background = QColor(255,255,200);
    valores = {0,1};
    tempo={0,1};
}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    painter.setRenderHint(QPainter::Antialiasing);
    pen.setColor(QColor(0,0,255));
    pen.setWidth(2);
    painter.setPen(pen);

    brush.setColor(background);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    painter.drawRect(0,0,width(), height());

    pen.setColor(Qt::darkCyan);
    pen.setWidth(2);
    painter.setPen(pen);

    int x1=tempo.at(0), y1=valores.at(0), x2, y2;
    qDebug() << tempo.size();
    if ((int)tempo.size() > 1){
    for(int i=0;i<(int)(tempo.size()); i++){
        y2 = valores.at(i);
        x2 = tempo.at(i);
        painter.drawLine(x1,y1,x2,y2);
        x1 = x2; y1 = y2;
        }
    }
}

void Plotter::setColor(int r, int g, int b){
    background.setRed(r);
    background.setGreen(g);
    background.setBlue(b);
    repaint();
}

void Plotter::load(std::vector<long> tempoatt, std::vector<int> valoresatt)
{

    qDebug() << tempoatt;
        qDebug() << valoresatt;
    int maxv = *max_element(std::begin(valoresatt), std::end(valoresatt));
    int minv = *min_element(std::begin(valoresatt), std::end(valoresatt));
    long maxt = *max_element(std::begin(tempoatt), std::end(tempoatt));
    long mint = *min_element(std::begin(tempoatt), std::end(tempoatt));
    qDebug() << maxv;
    qDebug() << maxt;
     qDebug() << minv;
      qDebug() << mint;
     valores.clear(); tempo.clear();
     if (maxv!=minv && maxt!=mint){
        for(int i=0;i<(int)(tempoatt.size()); i++){
        valores.push_back(height()-((valoresatt.at(i) - minv)*(height()/(maxv-minv))));
        tempo.push_back(((tempoatt.at(i) - mint)*width())/(maxt-mint));
        }
    }
    qDebug() << tempo;
    qDebug() << valores;


    repaint();
}






