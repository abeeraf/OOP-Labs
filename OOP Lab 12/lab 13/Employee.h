#ifndef Employee_h
#define Employee_h
#include <cstring>
#include <iostream> 
using namespace std;
#include "Person.h"
class Employee:public Person
{
protected:
	int Emp_no;
	float gross_pay;
	float house_rent;
	float medical_allow;
	float net_pay;

public:
	Employee();
	Employee(string name, string address, int Emp_no, float gross_pay, float house_rent, float medical_allow);
	virtual float calcSalary()=0;
	virtual void print();
};
#endif
