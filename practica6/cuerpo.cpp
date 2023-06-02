#include "cuerpo.h"

cuerpo::cuerpo()
{

}

cuerpo::cuerpo(float posx, float posy, float masa, float radio, float velx, float vely)
{
    this->x=posx;
    this->y=posy;
    this->m=masa;
    this->r=radio;
    this->vx=velx;
    this->vy=vely;
    this->ax=0;
    this->ay=0;
    this->color=0;
    setPos(this->x,this->y);
}

QRectF cuerpo::boundingRect() const
{
    return QRect(x,y, r*2,r*2);
}

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(color==0 or color==6)
    {
        painter->setBrush(Qt::blue);
        painter->drawEllipse(boundingRect());
    }
    else if(color==1)
    {
        painter->setBrush(Qt::red);
        painter->drawEllipse(boundingRect());
    }
    else if(color==2)
    {
        painter->setBrush(Qt::yellow);
        painter->drawEllipse(boundingRect());
    }
    else if(color==3)
    {
        painter->setBrush(Qt::green);
        painter->drawEllipse(boundingRect());
    }
    else if(color==4)
    {
        painter->setBrush(Qt::black);
        painter->drawEllipse(boundingRect());
    }

    else if(color==5)
    {
        painter->setBrush(Qt::magenta);
        painter->drawEllipse(boundingRect());
    }
}
