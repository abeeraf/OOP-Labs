#include"Line.h"
#include"Point.cpp"
#include<cmath>
#include<iostream>
using namespace std;
Line::Line():Point_1(2,4),Point_2(4,6)
{
	
}
Line::Line(int x1, int y1, int x2, int y2):Point_1(x1,y1),Point_2(x2,y2)
{ 

}
Line::Line(const Point &p1, const Point &p2):Point_1(p1.getX_Coordinate(),p1.getY_Coordinate()),Point_2(p2.getX_Coordinate(),p2.getY_Coordinate())
{

}
float Line::findLength()
{
	float a= pow((Point_1.getY_Coordinate()-Point_2.getY_Coordinate()),2);
	float b= pow((Point_1.getX_Coordinate()-Point_2.getX_Coordinate()),2);
	float c= sqrt(a+b);
	return c;
}
float Line::findSlope()
{
	return -1*((Point_1.getY_Coordinate()-Point_2.getY_Coordinate())/(Point_2.getX_Coordinate()-Point_1.getX_Coordinate()));
}
Point& Line::findMidPoint()
{
	
	Point* temp= new Point;
	temp->setY_Coordinate(floor((Point_1.getY_Coordinate()+Point_2.getY_Coordinate())/2));
	temp->setX_Coordinate(floor((Point_1.getX_Coordinate()+Point_2.getX_Coordinate())/2));
	return *temp;
	
}
