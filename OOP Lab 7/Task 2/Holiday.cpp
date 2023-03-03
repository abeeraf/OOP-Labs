#include "Holiday.h"
#include<cstring>
#include<iostream>
using namespace std;

Holiday::Holiday()
{
	name="NULL";
	day=0;
	month="NULL";
}
Holiday::Holiday(const string &n, int d, const string &m)
{
	name=n;
	day=d;
	month=m;
}
bool Holiday::setName(const string &s)
{
	string k=s;
	int c=0;
	while (s[c++]!='\0')
	
	if (c<=50)
	{
		name=s;return 1;
	}
	else 
	return 0;
}
string Holiday::getName() const
{
	return name;
}
bool Holiday::setDay(int u)
{
	if (u>0)
	{
		day=u;return 1;
	}
	else 
	return 0;
}
int Holiday::getDay() const
{
	return day;
}
bool Holiday::setMonth(const string &p)
{
	string k=p;
	int c=0;
	while (p[c++]!='\0')
	
	if (c<=10)
	{
		name=k;return 1;
	}
	else 
	return 0;
}
string Holiday::getMonth() const
{
	return month;
}
bool inSameMonth (const Holiday &a, const Holiday &b)
{ 
	if(a.getMonth()==b.getMonth())
	return 1;
	else 
	return 0;
}
double avgDate(Holiday arr[], int size)
{	float sum=0;
	for(int x=0;x<size;x++)
		sum+=arr[x].getDay();
	return (sum/size);
}

