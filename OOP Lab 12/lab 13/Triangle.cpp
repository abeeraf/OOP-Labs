#include "Triangle.h"
Triangle::Triangle():Shape()
{

}
Triangle::Triangle(string t, int b, int h):Shape(t)
{
	base=b;
	height=h;
}
float Triangle::area ()
{
	return 0.5*base*height; 
}
void Triangle::Display()
{
	cout<<"Type : "<<type;
	cout<<"Base :"<<base;
	cout<<"Height :"<<height;
}
