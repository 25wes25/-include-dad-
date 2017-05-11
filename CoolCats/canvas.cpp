#include "canvas.h"
#include <QDebug>
Canvas::Canvas(QWidget *parent)
    :QWidget(parent)
{
    setMinimumSize(1000,500);
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
    update();
}
void Canvas::mousePressEvent(QMouseEvent *event)
{
    bool found=false;
    for(int i =0 ;i < area.size()&&!found;i++)
    {
        qDebug() << event->pos();
        found = area[i]->is_Left_Clicked(event->pos());
        qDebug() << found;
    }
}
void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    bool found=false;
    int i =0;
    for(i =0;i < area.size()&&!found;i++)
    {
        qDebug() << event->pos();
        found = area[i]->is_Left_Clicked(event->pos());
        qDebug() << found;
        if(found)
        {
            area[i]->move(event->pos());
        }
    }
    update();


}

void Canvas::paintEvent(QPaintEvent * /* event */)
{
    render();
    //this QPainter object draws the background
    QPainter painter(this);
    painter.setPen(palette().dark().color());
    painter.setBrush(Qt::NoBrush);
    painter.save();
    painter.drawRect(0,0,width()-1,height()-1);
    painter.restore();
}
void Canvas::addShape(Shape *add)
{
    area.push_back(add);
}
void Canvas::render()
{
   for(int i=0;i<area.size();i++)
   {
       if(area[i]->isRendered())
       {
           area[i]->Draw(this);
       }
   }
}

