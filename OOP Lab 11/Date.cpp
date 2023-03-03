#include"Date.h"

Date::Date()
{
}
Date::Date(int day,int month,int year)
{
	this->day=day;
	this->month=month;
	this->year=year;
}
Date::Date(Date& obj)
{
	day=obj.day;
	month=obj.month;
	year=obj.year;
}
string Date::getDate()
{
	string str;
	str=to_string(day)+"/"+to_string(month)+"/"+to_string(year);
	return str;
}
int Date::calDate()
{
	return day;
}
