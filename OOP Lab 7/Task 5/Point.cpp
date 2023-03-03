#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
	x=0;
	y=0;
}
Point::Point(int x1, int y1)
{
	x=x1;
	y=y1;
}
Point::Point(const Point &copy)
{
	x=copy.x;
	y=copy.y;
}
int Point::getX() const
{
	return x;
}
int Point::getY() const
{
	return y;
}
void Point::setX(int x1)
{
	x=x1;
}
void Point::setY(int y1)
{
	y=y1;
}

