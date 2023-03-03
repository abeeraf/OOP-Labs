#ifndef Faculty_h
#define Faculty_h
#include <cstring>
#include <iostream> 
using namespace std;
#include "Employee.h"
class Faculty:public Employee
{
private:
	string designation;
	string department;
	string course;
public:
	Faculty();
	Faculty(string name, string address, int Emp_no, float gross_pay, float house_rent, 
	float medical_allow, string designation, string department);
	float calcSalary();
	void print();
};
#endif
