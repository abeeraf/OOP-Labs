#include "Circle.h"
Circle::Circle():Shape()
{
	radius=0;
}
Circle::Circle(string t, int r):Shape(t)
{
	radius=r;
}
float Circle::area ()
{
	return 3.14*radius*radius;
}
void Circle::Display()
{
	cout<<"Type : "<<type;
	cout<<"Radius :"<<radius;
	
}
