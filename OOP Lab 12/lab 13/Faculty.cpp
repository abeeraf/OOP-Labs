#include "Faculty.h"
Faculty::Faculty():Employee()
{

}
Faculty::Faculty(string name, string address, int Emp_no, float gross_pay, float house_rent,float medical_allow, string designation1, string department1):Employee(name, address, Emp_no, gross_pay, house_rent,medical_allow)
{
	designation=designation1;
	department=department1;
}
float Faculty::calcSalary()
{
	return gross_pay-(0.45*gross_pay-0.05*gross_pay);

}
void Faculty::print()
{
	
}
