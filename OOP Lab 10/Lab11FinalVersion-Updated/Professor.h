#ifndef Professor_h
#define Professor_h
#include<iostream>
using namespace std; 
class Professor {
	string name;
	int employeeID;
	string Designation;
public:
	Professor();
	Professor(string, int, string);
	void setName(string n);
	string getName() const;
	void setEmployeeID(int id);
	int getEmployeeID() const;
	void setDesignation(string d);
	string getDesignation() const;
};
#endif
