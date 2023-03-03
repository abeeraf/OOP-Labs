#ifndef Department_h
#define Department_h
#include"Professor.h"
class Department {
	string name;
	Professor* profList;
	int noOfProfessors;
	int deptID;
public:
	Department();
	Department(string, int, int);
	void setDeptID(int i);
	int getDeptID() const;
	void setName(string n);
	string getName() const;
	void setnoOfProfessors(int n);
	int getnoOfProfessors() const;
	bool addProfessor(Professor p);
	bool deleteProfessor (int id);
	bool updateProfessor (int , string );
	void display();
	//virtual ~Department();
};
#endif
