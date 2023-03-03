#include"Date.h"

Date::Date(int year, int month, int day)
{
	this->day=day;
	this->month=month;
	this->year=year;
}
void Date::operator=(const Date &obj)
{
	this->day=obj.day;
	this->month=obj.month;
	this->year=obj.year;
}
void Date::operator+(int d)
{
	int a;
	if (month==2)
	{
		if(isLeapYear())
		a=29;
		else 
		a=28;
	}
	else if ((month==1)or(month==3)or(month==5)or(month==7)or(month==8)or(month==10)or(month==12))
	a=31;
	else 
	a=30;

	day+=d%a;
	month+=d/a;
	year+=month/12;
}
void Date::operator-(int d)
{
	int a;
	if (month==3)
	{
		if(isLeapYear())
		a=29;
		else 
		a=28;
	}
	else if ((month==2)or(month==4)or(month==6)or(month==8)or(month==9)or(month==11)or(month==0))
	a=31;
	else 
	a=30;
	day-=d;
	if (day<0)
	{
		day=a+day;
		month-=1;
			if(month==0)
			{
				month=12;
				year-=1;
			}
	}
		
		
}
void Date::operator+(const Date &obj)
{
	int a;
	if (month==2)
	{
		if(isLeapYear())
		a=29;
		else 
		a=28;
	}
	else if ((month==1)or(month==3)or(month==5)or(month==7)or(month==8)or(month==10)or(month==12))
	a=31;
	else 
	a=30;

	day+=obj.day%a;
	month+=obj.day/a;
	year+=obj.month/12;
}
void Date::operator-(const Date &obj)
{
	int a;
	if (month==3)
	{
		if(isLeapYear())
		a=29;
		else 
		a=28;
	}
	else if ((month==2)or(month==4)or(month==6)or(month==8)or(month==9)or(month==11)or(month==0))
	a=31;
	else 
	a=30;
	this->day-=obj.day;
	if (day<0)
	{
		day=a+obj.day;
		month-=1;
			if(month==0)
			{
				month=12;
				year-=1;
			}
	}
}
bool Date::operator>(const Date &obj)
{
	if(this->year>obj.year)
	return 1;
	else if ((this->year==obj.year)&&(this->month>obj.month))
	return 1;
	else if ((this->year==obj.year)&&(this->month==obj.month)&&(this->day>obj.day))
	return 1;
	else 
	return 0;
}
bool Date::operator>=(const Date &obj)
{
	if(this->year>obj.year)
	return 1;
	else if ((this->year==obj.year)&&(this->month>obj.month))
	return 1;
	else if ((this->year==obj.year)&&(this->month==obj.month)&&(this->day>obj.day))
	return 1;
	else if ((this->year==obj.year)&&(this->month==obj.month)&&(this->day==obj.day))
	return 1;
	else 
	return 0;
}
bool Date::operator<(const Date &obj)
{
	if(this->year>year)
	return 0;
	else if ((this->year==obj.year)&&(this->month>obj.month))
	return 0;
	else if ((this->year==obj.year)&&(this->month==obj.month)&&(this->day>obj.day))
	return 0;
	else 
	return 1;
}
bool Date::operator<=(const Date &obj)
{
	if(this->year>obj.year)
	return 0;
	else if ((this->year==obj.year)&&(this->month>obj.month))
	return 0;
	else if ((this->year==obj.year)&&(this->month==obj.month)&&(this->day>obj.day))
	return 0;
	else if ((this->year==obj.year)&&(this->month==obj.month)&&(this->day==obj.day))
	return 1;
	else 
	return 1;
}
bool Date::operator!=(const Date &obj)
{
	if ((this->year!=obj.year)&&(this->month!=obj.month)&&(this->day!=obj.day))
	return 1;
	else 
	return 0;
}
bool Date::operator==(const Date &obj)
{
	if ((this->year==obj.year)&&(this->month==obj.month)&&(this->day==obj.day))
	{return 1;}
	else 
	{return 0;}
}
int Date::getDay()
{
	return day;
}
int Date::getMonth()
{
	return month;
}
int Date::getYear()
{
	return year;
}
bool Date::isLeapYear()
{
	if (year%4==0)
	{
		if((year%100==0)&&(year%400!=0))
		return 0;
		else 
		return 1;
	}
	else 
	return 0;
}
string Date::toString()
{
	string dat,mon,yr;
	dat=std::to_string(day);
	mon=std::to_string(month);
	yr=std::to_string(year);
	if (month<10)
	return yr+"/"+mon+"/"+dat;
	else 
	return yr+"/"+"0"+mon+"/"+dat;
}
/*
main(){}*/



