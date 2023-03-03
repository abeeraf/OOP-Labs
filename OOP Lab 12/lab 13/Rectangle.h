#ifndef Rectangle_h
#define Rectangle_h
#include "Shape.h"
#include <iostream>
using namespace std;

class Rectangle: public Shape
{
	private:
		int height;
		int width;
	public:
		Rectangle();
		Rectangle(string t, int h, int w);
		float area ();
		void Display();
};
#endif
