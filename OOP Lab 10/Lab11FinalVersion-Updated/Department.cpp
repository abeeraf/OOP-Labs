#include"Department.h"
Department::Department()
{
	name=" ";
	profList= NULL;
	noOfProfessors=0;
	deptID=0;
}
Department::Department(string nam, int no, int id)
{
	name=nam;
	profList=new Professor[no];
	noOfProfessors=no;
	deptID=id;
}
void Department::setDeptID(int i)
{
	deptID=i;
}
int Department::getDeptID() const
{
	return deptID;
}
void Department::setName(string n)
{
	name=n;
}
string Department::getName() const
{
	return name;
}
void Department::setnoOfProfessors(int n)
{
	noOfProfessors=n;
}
int Department::getnoOfProfessors() const
{
	return noOfProfessors;
}
bool Department::addProfessor(Professor p)
{
	for (int x=0;x<noOfProfessors;x++)
	{
		if (profList[x].getName()==" ")
		{	
			profList[x].setName(p.getName());
			profList[x].setEmployeeID(p.getEmployeeID());
			profList[x].setDesignation(p.getDesignation());
			noOfProfessors+=1;
			return 1;
		}
	}
}
bool Department::deleteProfessor (int id)
{
	for (int x=0;x<noOfProfessors;x++)
	{
		if(profList[x].getEmployeeID()==id)
		{
			for (int y=x;y<noOfProfessors-1;y++)
			{
				profList[y].setName(profList[y+1].getName());
				profList[y].setEmployeeID(profList[y+1].getEmployeeID());
				profList[y].setDesignation(profList[y+1].getDesignation());
			}
		noOfProfessors--;
		return 1;
		}
	}
	return 1;

}
bool Department::updateProfessor (int id, string des)
{
	
	for (int x=0;x<noOfProfessors;x++)
	{
		if(profList[x].getEmployeeID()==id)
		{
			profList[x].setDesignation(des);return 1;
		}
	}
	return 1;
}
void Department::display()
{
	cout<<name;
	for (int x=0;x<noOfProfessors;x++)
	{	
		profList[x].getName();
		profList[x].getEmployeeID();
		profList[x].getDesignation();
	}
	cout<<noOfProfessors;
	cout<<deptID;

}
/*virtual ~Department()
{

}*/




