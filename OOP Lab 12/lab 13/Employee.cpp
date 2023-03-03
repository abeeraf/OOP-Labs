#include "Employee.h"
Employee::Employee():Person()
{

}
Employee::Employee(string name, string address, int Emp_no1, float gross_pay1, float house_rent1, float medical_allow1):Person(name,address)
{
	Emp_no=Emp_no1;
	gross_pay=gross_pay1;
	house_rent=house_rent1;
	medical_allow=medical_allow1;
	//net_pay=gross_pay–((45/100)*gross_pay–(5/100)*gross_pay);
}
void Employee::print()
{

}
