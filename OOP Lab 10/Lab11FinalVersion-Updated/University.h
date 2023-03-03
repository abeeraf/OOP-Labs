#ifndef University_h
#define University_h
#include"Department.h"
#include "Professor.h"
class University {
string name;
int numberOfDepartments;
Department* dept;
public:

	University();
	University(string n, int num);
	void setName(string n);
	string getName() const;
	void setnumberOfDepartments(int n);
	int getnumberOfDepartments() const;
	void setDept(const Department &d );
	Department getDept() const;
	bool addDepartment(Department );
	bool deleteDepartment(string);
	bool updateDepartment(int, string );
	void display();
	virtual~University();
};
#endif
