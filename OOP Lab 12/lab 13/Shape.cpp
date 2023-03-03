#include "Shape.h"

Shape::Shape()
{

}
Shape::Shape(string t)
{
	type=t;
}
void Shape::Display()
{
	cout<<"Type : "<<type;
}
