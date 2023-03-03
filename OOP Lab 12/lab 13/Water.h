#ifndef Water_h
#define Water_h
#include <cstring>

#include <iostream> 
#include "Drink.h"
using namespace std;
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
#endif
