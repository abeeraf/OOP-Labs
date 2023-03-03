class Car {
private:
	string make;
	string carModel;
	string regNo;
	int year;

public:
	Car();
	Car(string m, string c, string r, int y);
	string getCarModel() const;
	void setCarModel(string carModel);
	string getMake() const;
	void setMake(string make);
	string getRegNo() const;
	void setRegNo(string regNo);
	int getYear() const;
	void setYear(int year);
	
};



class Garage {
private:
	string name;
	int index;
	int capacity;
	Car *CarList;
public:
	Garage();
	Garage(string, int, int);
	bool IsEmpty();
	bool IsFull();
	bool Push(Car c);
	bool Find(string reg);
	bool Remove(string reg);
	void Display();
	virtual ~Garage();
};


class Line {
	Point Point_1;
	Point Point_2;

public:
	Line();
	Line(int x1, int y1, int x2, int y2);
	Line(const Point &p1, const Point &p2);
	float findLength();
	float findSlope();
	Point& findMidPoint();
};

class Point {
private:
	int X_Coordinate;
	int Y_Coordinate;
public:
	Point();
	Point(int , int);
	Point(const Point &p);
	int getX_Coordinate() const;
	int getY_Coordinate() const;
	void setX_Coordinate(int x);
	void setY_Coordinate(int y);
	
};



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
	void setnoOfProfressors(int n);
	int getnoOfProfessors() const;
	bool addProfessor(Professor p);
	bool deleteProfessor (int id);
	bool updateProfessor (int , string );
	void display();
	virtual ~Department();
};

class University {
string name;
int numberOfDepartments;
Department* dept;
public:

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
	virtual ~University();
};

