#include"Counter.h"
int Counter :: objCount = 0;
Counter::Counter()
{
	count=0;
	objCount=0;
	serialNo=objCount;
}
Counter::Counter(int c)
{
	count=c;
	objCount=c;
	serialNo=objCount;
}
Counter::~Counter()
{
	objCount--;
}
void Counter::setCount(int c)
{
	count=c;
}
int Counter::getCount()const
{
	return count;
}
int Counter::getSerialNo()const
{
	return serialNo;
}
int Counter::getObjCount()
{
	return objCount;
}
int Counter::IncrementObjCount()
{
	objCount++;
}
void Counter::operator=(Counter obj)
{
	count=obj.count;
}
Counter Counter::operator-(Counter obj)
{	
	Counter temp;
	temp.setCount(-1*obj.count);
	return temp;
}

main(){}



