#ifndef Time_h
#define Time_h 
#include <cstring>
#include <iostream>
using namespace std;

class Time{
protected:
int hours;
int minutes;
int seconds; 

public:
string getTime();
Time(Time& obj);
Time(int hours, int minutes, int seconds);
};
#endif 
