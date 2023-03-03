#include "DateTime.h"

DateTime::DateTime(int d,int mon,int yr,int hr, int min, int sec):Date(d,mon,yr),Time(hr,min,sec)
{
}
DateTime::DateTime():Date(0,0,0),Time(0,0,0)
{
}
DateTime::DateTime(Date& obj,Time& obj1):Date(obj),Time(obj1)
{
}
string DateTime::getDT()
{
	string str;
	str=getDate()+" "+getTime();
	return str;
}
