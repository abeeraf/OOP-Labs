#include "Triangle.h"
Triangle::Triangle(Vertex& a,Vertex& b,Vertex& c):SegList()
{
	addVertex(a);
	addVertex(b);
	addVertex(c);
}
string Triangle::getSpec()
{
	string str;
	str="type=triangle,"+SegList::getSpec();
	return str;
	
}
