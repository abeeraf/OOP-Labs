#ifndef Date_h
#define Date_h
#include <iostream>
#include <cstring>
using namespace std; 

class Date{
protected:
int day; 
int month;
int year;

public:
Date();
Date(int day,int month,int year);
Date(Date& obj);
string getDate();
int calDate();
};
#endif 
