#include "Rectangle.h"

Rectangle::Rectangle():Shape()
{

}
Rectangle::Rectangle(string t, int h, int w):Shape(t)
{
	width=w;
	height=h;
}
float Rectangle::area ()
{
	return width*height; 
}
void Rectangle::Display()
{
	cout<<"Type : "<<type;
	cout<<"Width :"<<width;
	cout<<"Height :"<<height;
}
