#ifndef Employee_h
#define Employee_h
#include "Person.h"
#include "Date.h"
class Employee:public Person{

int Empno;
Date Hd;

public:

Employee();
Employee(int, Date&,string,string);
};

#endif
