#include"Rectangle.h"
#include<iostream>
#include<string.h>


Rectangle::Rectangle(int x, int y, int width, int height)
{
	p1.setX(x);p1.setY(y);
	width1=width;
	height1=height;
}
Rectangle::Rectangle(Point p, int width, int height)
{
	p1=p;
	width1=width;
	height1=height;
}
Rectangle::Rectangle(const Rectangle &copy) 
{
	p1=copy.p1;
	width1=copy.width1;
	height1=copy.height1;
}
int Rectangle::getHeight()const
{
	return height1;
}
int Rectangle::getWidth()const
{
	return width1;
}
int Rectangle::getX()const
{
	return p1.getX();
}
int Rectangle::getY()const
{
	return p1.getY();
}

string Rectangle::toString()
{
string linstring="Rectangle[x=" + to_string(p1.getX()) + ", y=" + to_string(p1.getY()) + ", width=" + to_string(width1) + ", height=" + to_string(height1) + "]"; cout << linstring << endl;

return linstring;
}
bool Rectangle::contains(Point p)
{
	if((p.getX()<=p1.getX()+getWidth())&&(p.getY()<=p1.getY()+getHeight()))
	return 1;
	else 
	return 0;
}
Rectangle Rectangle::Union(Rectangle & rect)
{/*
	if((rect.width1==
	{
			
	}
	else 
	{
		Rectangle rect1;
		rect1=rect;
		rect1.width1=0;
		rect1.height=0;
		return rect1;
	}
*/
}



