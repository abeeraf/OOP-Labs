#include "SegList.h"

SegList::SegList()
{
	srand(time(0));
	for (int x=0; x<10; x++)
	{
		arr[x].setx(rand()%101);
		arr[x].sety(rand()%101);
	}
}
/*SegList::SegList(Vertex a)
{
	addVertex( a);
}*/
void SegList::addVertex(Vertex& a)
{
	arr[count].setx(a.getx());
	arr[count++].sety(a.gety());
}
string SegList::getSpec()
{
	string str;
	for (int x=0; x<count; x++)
	{
		if(x<count-1)
		str+=arr[x].stringRep()+",";
		else 
		str+=arr[x].stringRep();
	}
	return str;
}
