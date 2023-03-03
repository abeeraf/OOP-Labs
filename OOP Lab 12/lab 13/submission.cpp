#include <iostream>
#include <string>
using namespace std;
//------------------Task 1
class Shape
{
protected:
	string type;
public:
	Shape();
	Shape(string t);
virtual float area ()=0;
virtual void Display();
};

//---------------------------
class Circle:public Shape
{
private:
	int radius;

public:
Circle();
Circle(string t, int r);
float area ();
virtual void Display();
};

//--------------------------
class Triangle:public Shape
{
private:
float base;
float height;

public:
	Triangle();
	Triangle(string t, int b, int h);
	float area ();
	void Display();
};

//-------------------------
class Rectangle: public Shape
{
private:
	int height;
	int width;
public:
	Rectangle();
	Rectangle(string t, int h, int w);
	float area ();
	void Display();
};
//------------------Task 2
class Person
{
protected:
	string name;
	string address;
	

public:
	Person();
	Person(string n, string a);

};

//----------------------------------
class Employee:public Person
{
protected:
	int Emp_no;
	float gross_pay;
	float house_rent;
	float medical_allow;
	float net_pay;

public:
	Employee();

	Employee(string name, string address, int Emp_no, float gross_pay, float house_rent, float medical_allow);
	virtual float calcSalary()=0;
	virtual void print();
};

//-----------------------------------
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

//-----------------Task 3
class Drink
{
protected:
	string flavour;
	int temprature;
	int price;
	int expiry;

public:
	Drink();
	Drink(string, int, int, int);
	int getPrice();
	int getTemp();
	int getExpDate();
	string getFlavor();
};
//----------------------------------
class Water:public Drink
{
protected:
	string supplier;

public:
	Water();
	Water(string, string, int, int, int);
	Water(string, Drink);
	void display();
};

//------------------------------------
class Carbonated: public Water
{
	string type;

public:
	Carbonated();
	Carbonated(string, string, string, int, int, int);
	void display();
};
