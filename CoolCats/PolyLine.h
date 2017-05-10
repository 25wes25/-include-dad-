#ifndef POLYLINE_H
#define POLYLINE_H
#include "Vector.h"
#include "Line.h"
#include "canvas.h"
class PolyLine
{
	private:
        Vector<Line> Poly;
	public:
        void Draw(Canvas *drawArea);
};
#endif
