
#ifndef SHAPE_H
#define SHAPE_H

#include <QPainter>
#include "Vector.h"
#include <QWidget>
#include <QString>
#include <QPainter>
#include <QPoint>
#include <QTextStream>
class Canvas;


class Shape
{
    protected:
        QString id;
        bool isRender;
        Qt::BrushStyle brushStyle;
        Qt::GlobalColor penColorEdit;
        double penWidthEdit;
        Qt::PenCapStyle penCapEdit;
        Qt::PenJoinStyle PenJoinEdit;
        Qt::GlobalColor brushColorEdit;
        Qt::PenStyle penStyleEdit;

    public:
        Shape();
        //constructor for hard coded data.
        Shape(QString idIn,
              bool isRender,
              Qt::BrushStyle brushIn,
              Qt::GlobalColor pencolorIn,
              double width,
              Qt::PenCapStyle penCapIn,
              Qt::PenJoinStyle penJoinIn,
              Qt::GlobalColor brushColorIn,
              Qt::PenStyle penStyleIn);
        //constructor for file Reading
        Shape(QString idIn,
              bool isRender,
              QString brushIn,
              QString penColorIn,
              double width,
              QString penCapIn,
              QString PenJoinIn,
              QString BrushColorIn,
              QString PenStyleIn);
        //constructor for
        Shape(QString idIn,
              bool isRender,
              int brushIn,
              int penColorIn,
              double width,
              int penCapIn,
              int PenJoinIn,
              int BrushColorIn,
              int PenStyleIn);
        Shape(const Shape& src);// Copy Constructor

        Qt::BrushStyle intToBrushStyle(int index);
        Qt::GlobalColor intToColor(int index);
        Qt::PenCapStyle intToPenCap(int index);
        Qt::PenJoinStyle intToPenJoin(int index);
        Qt::PenStyle intToPenStyle(int index);
        bool isRendered();
        virtual ~Shape();
        void configurePainter(QPainter &p);

        // Operator Overloads
        Shape& operator=(const Shape& src);

        // Accessors
        QString GetID();
        QString GetPenColor();
        QString GetPenWidth();
        int GetPenWidthInt(){return penWidthEdit;}
        QString GetPenStyle();
        QString GetPenCapStyle();
        QString GetPenJoinStyle();
        QString GetBrushColor();
        QString GetBrushStyle();

        //mutators
        void setPenColor(Qt::GlobalColor penIn){penColorEdit= penIn;}
        void setPenWidth(int widthIn){penWidthEdit=widthIn;}
        void setPenStyle(Qt::PenStyle pStyleIn){penStyleEdit=pStyleIn;}
        void setPenCapStyle(Qt::PenCapStyle pcStyleIn){penCapEdit=pcStyleIn;}
        void setPenJoinStyle(Qt::PenJoinStyle pjStyleIn){PenJoinEdit=pjStyleIn;}
        void setBrushColor(Qt::GlobalColor brushColorIn){brushColorEdit = brushColorIn;}
        void setBrushStyle(Qt::BrushStyle bsIn){brushStyle = bsIn;}


        virtual void Print(QTextStream& output);
        virtual void move(QPoint xy){xy = QPoint(0,0);}
        virtual void move(int x , int y){x=-1;y=-1;}
        virtual void resize(double x){x=-1;}
        virtual void Draw(Canvas *paintArea){paintArea;}
        virtual bool is_Left_Clicked(QPoint e){return false;}
};
#endif //Shape End

