#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "canvas.h"
#include "shape.h"

class Rectangle:public Shape
{
    private:
        int x;
        int y;
        double width;
        double length;
    public:
        Rectangle();
        Rectangle(double w, double l);
        Rectangle(Rectangle &copy);
        Rectangle(Rectangle &&copy);
        ~Rectangle();

        // Mutators
        void setWidthLength(double w, double l);
        void setWidth(double w);
        void setLength(double l);

        // Accessors
        double getWidth() {return width;}
        double getLength() {return length;}
        double getArea()	{return (length*width);}
        double getPerimeter() {return (length+length+width+width);}
        void Draw(Canvas *drawArea);
};
#endif