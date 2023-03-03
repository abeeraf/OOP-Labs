#include "Line.h"
//#include "Point.cpp"
//#include"Point.h"
#include <cstring>
#include<iostream>
using namespace std;

Line::Line(const Point &p1, const Point &p2)
{
	p11=p1;
	p22=p2;
}
Line::Line(int x1, int y1, int x2, int y2)
{
	p11.setX(x1);
	p11.setY(y1);
	p22.setX(x2);
	p22.setY(y2);
	 
}
Line::Line(const Line &copy)
{
	p11=copy.p11;
	p22=copy.p22;
} 
Point Line::getP1() const
{
	return p11;
}
Point Line::getP2() const
{
	return p22;
}
string Line::toString()
{
	
string linstring="[" + to_string(p11.getX()) + "," + to_string(p11.getY()) + ")"+"("+ to_string(p22.getX()) + "," + to_string(p22.getY()) + ")"+"]";


return linstring;
	
}
double Line::getSlope()
{
	return ((p11.getY()-p22.getY())/(p11.getX()-p22.getX()));
	
}















