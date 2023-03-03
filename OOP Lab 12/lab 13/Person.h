#ifndef Person_h
#define Person_h
#include <cstring>

#include <iostream> 
using namespace std;

class Person
{
protected:
	string name;
	string address;
	

public:
	Person();
	Person(string n, string a);

};
#endif
