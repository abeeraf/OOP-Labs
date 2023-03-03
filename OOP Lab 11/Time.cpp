#include "Time.h"
Time::Time(int hours, int minutes, int seconds)
{
	this->hours=hours;
	this->minutes=minutes;
	this->seconds=seconds;
}
Time::Time(Time& obj)
{
	hours=obj.hours;
	minutes=obj.minutes;
	seconds=obj.seconds;
}
string Time::getTime()
{
	string str;
	str=to_string(hours)+":"+to_string(minutes)+":"+to_string(seconds);
	return str;
}

