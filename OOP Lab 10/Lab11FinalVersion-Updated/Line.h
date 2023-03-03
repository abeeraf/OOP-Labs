#ifndef Line_h
#define Line_h
#include"Point.h"

class Line {
	Point Point_1;
	Point Point_2;

public:
	Line();
	Line(int x1, int y1, int x2, int y2);
	Line(const Point &p1, const Point &p2);
	float findLength();
	float findSlope();
	Point& findMidPoint();
};
#endif
