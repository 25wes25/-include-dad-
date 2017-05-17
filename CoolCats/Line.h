#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include "canvas.h"
class Line: public Shape
{
	private:
		int x1;
		int y1;
		int x2;
		int y2;
	public:
        void Draw(Canvas *drawArea);
};
#endif
