#ifndef CUERPO_H
#define CUERPO_H
#include <QGraphicsItem>
#include <QPainter>


class cuerpo: public QGraphicsItem
{
public:
    int x, y, color;
    float m, r, vx, vy, ax, ay;
    cuerpo();
    cuerpo(int posx, int posy, float masa, float radio, float velx, float vely);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // CUERPO_H
