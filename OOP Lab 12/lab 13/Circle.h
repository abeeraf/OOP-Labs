#ifndef Circle_h
#define Circle_h
#include <iostream>
#include "Shape.h"
using namespace std; 

class Circle:public Shape
{
	private:
		int radius;

	public:
	Circle();
	Circle(string t, int r);
	float area ();
	virtual void Display();
};
#endif
