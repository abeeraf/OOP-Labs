#ifndef Shape_h
#define Shape_h
#include <iostream>
#include <cstring>
using namespace std; 

class Shape
{
protected:
	string type;
public:
	Shape();
	Shape(string t);
	virtual float area ()=0;
	virtual void Display();
};
#endif
