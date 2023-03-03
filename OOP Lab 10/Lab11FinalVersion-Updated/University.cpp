#include "University.h"
University::University()
{
	name=" ";
	numberOfDepartments=10;
	dept=new Department [10];
}
University::University(string n, int num)
{
	name=n;
	numberOfDepartments=num;
	dept=new Department [numberOfDepartments];
}
void University::setName(string n)
{
	name=n;
}
string University::getName() const
{
	return name;
}
void University::setnumberOfDepartments(int n)
{
	numberOfDepartments=n;
}
int University::getnumberOfDepartments() const
{
	return numberOfDepartments;
}
void University::setDept(const Department &d )
{
	for(int x=0;x<numberOfDepartments;x++)
	if(dept[x].getName()==" ")
	{
		dept[x].setName(d.getName());
		dept[x].setDeptID(d.getDeptID());
		dept[x].setnoOfProfessors(d.getnoOfProfessors());
	}
}
Department University::getDept() const
{
	return *dept;
}
bool University::addDepartment(Department d)
{
	for(int x=0;x<numberOfDepartments;x++)
	{	if(dept[x].getName()==" ")
		{	
			dept[x].setName(d.getName());
			dept[x].setDeptID(d.getDeptID());
			dept[x].setnoOfProfessors(d.getnoOfProfessors());
			numberOfDepartments++;
			return 1;
		}
	}
	return 0;
	
}
bool University::deleteDepartment(string nam)
{
	for (int x=0;dept[x].getName()!=" ";x++)
	{
		if(dept[x].getName()==name)
		{
			for (int y=x;dept[y].getName()!=" ";y++)
			{
				dept[y].setName(dept[y+1].getName());
				dept[y].setDeptID(dept[y+1].getDeptID());
				dept[y].setnoOfProfessors(dept[y+1].getnoOfProfessors());
			}
		numberOfDepartments--;return 1;}
		
	}
	return 1;
}
bool University::updateDepartment(int id, string nam)
{
	bool e=1;
	for (int x=0;dept[x].getName()!=" ";x++)
	{
		if(dept[x].getDeptID()==id)
		{dept[x].setName(nam);return 1;}
	}
	return e;
	
}
void University::display()
{
	cout<<name;
	cout<<numberOfDepartments;
	for(int x=0;x<numberOfDepartments ;x++)
	{
		dept[x].setName(dept[x+1].getName());
		dept[x].setDeptID(dept[x+1].getDeptID());
		dept[x].setnoOfProfessors(dept[x+1].getnoOfProfessors());
	}

}
University::~University()
{
	delete []dept;
}



