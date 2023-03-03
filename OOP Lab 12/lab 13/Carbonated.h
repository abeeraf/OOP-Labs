#ifndef Carbonated_h
#define Carbonated_h
#include <cstring>

#include <iostream> 
using namespace std;
#include "Water.h"
class Carbonated: public Water
{
	string type;

public:
	Carbonated();
	Carbonated(string, string, string, int, int, int);
	void display();
};
#endif
