#include"Point.cpp"
#include <cstring>
#include<iostream>
using namespace std;

class Rectangle
{
	private:
	Point p1;
	int width1;
	int height1;

	public:
	Rectangle(int x, int y, int width, int height);
	Rectangle(Point p, int width, int height);
	Rectangle(const Rectangle &copy) ;
	int getHeight()const;
	int getWidth()const;
	int getX()const;
	int getY()const;
	string toString();
	bool contains(Point p);
	Rectangle Union(Rectangle & rect);
};
