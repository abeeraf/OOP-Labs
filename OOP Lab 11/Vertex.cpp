#include "Vertex.h"

Vertex::Vertex()
{
	x=0;
	y=0;
}
Vertex::Vertex(int a, int b)
{
	x=a;
	y=b;
}
void Vertex::setx(int y)
{
	x=y;
}
void Vertex::sety(int x)
{
	y=x;
}
int Vertex::getx()
{
	return x;
}
int Vertex::gety()
{
	return y;
}
string Vertex::stringRep()
{
	return "x="+to_string(x)+",y="+to_string(y);
}
