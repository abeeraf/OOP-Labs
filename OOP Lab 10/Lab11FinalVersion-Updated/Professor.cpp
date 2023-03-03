#include "Professor.h"
Professor::Professor()
{
	name="NULL";
	employeeID=0;
	Designation="NULL";
}
Professor::Professor(string n, int eid, string des)
{
	name=n;
	employeeID=eid;
	Designation=des;
}
void Professor::setName(string n)
{
	name=n;
}
string Professor::getName() const
{
	return name;
}
void Professor::setEmployeeID(int id)
{
	employeeID=id;
}
int Professor::getEmployeeID() const
{
	return employeeID;
}
void Professor::setDesignation(string d)
{
	Designation=d;
}
string Professor::getDesignation() const
{
	return Designation;
}
