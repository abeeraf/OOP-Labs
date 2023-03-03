#include"Distance.h"

Distance::Distance()
{
	feet=0;
	inches=0;
}
Distance::Distance(int f,int i)
{
	feet=f+i/12;
	inches=i+f%12;
}

bool Distance::setFeet(int f)
{
	feet=f/12;
	inches+=f%12;
}
int Distance::getFeet()const
{
	return feet;
}
bool Distance::setInches(int i) 
{
	inches=i%12;
	feet+=i/12;
}
int Distance::getInches()const
{
	return inches;
}
Distance Distance::operator+(const Distance &obj)
{
	Distance temp;
	temp.inches=setInches(inches+obj.getInches());
	temp.feet=setFeet(feet+obj.getFeet());
	return temp;
}
Distance Distance::operator-(const Distance &obj)
{
	Distance temp;
	temp.inches=setInches(inches-obj.getInches());
	temp.feet=setFeet(feet-obj.getFeet());
	return temp;
}
bool Distance::operator>(const Distance &obj)
{
	if(feet>obj.getFeet())
	return 1;
	else if(feet==obj.getFeet())
		{
			if(inches>obj.getInches())
			return 1;
			else 
			return 0;
		}
	else 
	return 0;

}
bool Distance::operator<(const Distance &obj)
{
	if(feet<obj.getFeet())
	return 1;
	else if(feet==obj.getFeet())
		{
			if(inches<obj.getInches())
			return 1;
			else 
			return 0;
		}
	else 
	return 0;
}
const Distance Distance::operator=(const Distance &obj)
{
	
	inches=obj.getInches();
	feet=obj.getFeet();
	
}
/*
main()
{

}
*/








