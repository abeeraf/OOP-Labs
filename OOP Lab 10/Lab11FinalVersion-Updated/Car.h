#ifndef Car_h
#define Car_h
#include<iostream>
using namespace std;
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
#endif
