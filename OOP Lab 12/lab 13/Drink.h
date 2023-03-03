#ifndef Drink_h
#define Drink_h
#include <cstring>

#include <iostream> 
using namespace std;

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
#endif
