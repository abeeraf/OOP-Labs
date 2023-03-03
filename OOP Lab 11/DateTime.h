#ifndef DateTime_h
#define DateTime_h
#include "Date.h"
#include "Time.h"
class DateTime: public Date,public Time{

public:
DateTime();
DateTime(int day,int month,int year,int hours, int minutes, int seconds);
DateTime(Date&,Time&);
string getDT();
};
#endif
