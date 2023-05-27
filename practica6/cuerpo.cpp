#include "cuerpo.h"

cuerpo::cuerpo()
{

}

cuerpo::cuerpo(int posx, int posy, float masa, float radio, float velx, float vely)
{
    this->x=posx;
    this->y=posy;
    this->m=masa;
    this->r=radio;
    this->vx=velx;
    this->vy=vely;
    this->color=getColor();
    setPos(this->x,this->y);
}

QRectF cuerpo::boundingRect() const
{
    return QRect(x,y, 4,4);
}

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(color==0)
    {
        painter->setBrush(Qt::blue);
    }
    else if(color==1)
    {
        painter->setBrush(Qt::red);
    }
    else if(color==2)
    {
        painter->setBrush(Qt::yellow);
    }
    else if(color==3)
    {
        painter->setBrush(Qt::green);
    }
    else if(color==4)
    {
        painter->setBrush(Qt::black);
    }

    else if(color==5)
    {
        painter->setBrush(Qt::magenta);
    }
}

int cuerpo::getColor()
{
    srand(static_cast<unsigned int>(time(0)));
    return rand() % 6;
}
