#include"Car.h"
Car::Car()
{
	/*make=" ";
	carModel=" ";
	regNo=" ";
	year=0;*/
}
Car::Car(string m, string c, string r, int y)
{
	make=m;
	carModel=c;
	regNo=r;
	year=y;
}
string Car::getCarModel() const
{
	return carModel;
}
void Car::setCarModel(string carModel)
{
	this->carModel=carModel;
}
string Car::getMake() const
{
	return make;
}
void Car::setMake(string make)
{
	this->make=make;
}
string Car::getRegNo() const
{
	return regNo;
}
void Car::setRegNo(string regNo)
{
	this->regNo=regNo;
}
int Car::getYear() const
{
	return year;
}
void Car::setYear(int year)
{
	this->year=year;
}
	
