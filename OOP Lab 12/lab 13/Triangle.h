#ifndef Triangle_h
#define Triangle_h
#include <iostream>
#include "Shape.h"
using namespace std; 

class Triangle:public Shape
{
	private:
	float base;
	float height;

	public:
	Triangle();
	Triangle(string t, int b, int h);
	float area ();
	void Display();
};
#endif
