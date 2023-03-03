#ifndef Garage_h
#define Garage_h
#include"Car.h"
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
	//virtual ~Garage();
};
#endif
