#ifndef CUERPO_H
#define CUERPO_H
#include <QGraphicsItem>
#include <QPainter>
#include <cstdlib>
#include <ctime>


class cuerpo: QGraphicsItem
{
public:
    int x, y, color;
    float m, r, vx, vy;
    cuerpo();
    cuerpo(int posx, int posy, float masa, float radio, float velx, float vely);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int getColor();
};

#endif // CUERPO_H
