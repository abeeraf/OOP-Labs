#include "Square.h"
Square::Square(Vertex& a,Vertex& b,Vertex& c,Vertex&d):SegList()
{
	addVertex( a);
	addVertex( b);
	addVertex( c);
	addVertex( d);
}
string Square::getSpec()
{
	string str;
	str="type=square,"+SegList::getSpec();
	return str;
}
