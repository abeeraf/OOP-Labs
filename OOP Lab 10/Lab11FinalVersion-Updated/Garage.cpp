#include"Garage.h"
#include"Car.cpp"
#include<cmath>

Garage::Garage()
{
	name="NULL";
	index=0;
	capacity=10;
	CarList=new Car[10];
}
Garage::Garage(string n, int i, int c)
{
	name=n;
	index=i;
	capacity=c;
	CarList=new Car[capacity];
}
bool Garage::IsEmpty()
{
	if (index==0)
	return 1;
	else 
	return 0;
}
bool Garage::IsFull()
{
	if (capacity==index)
	return 1;
	else 
	return 0;
}
bool Garage::Push(Car c)
{
	if (index<capacity)
	{
		CarList[index].setCarModel(c.getCarModel());
		CarList[index].setMake(c.getMake());
		CarList[index].setRegNo(c.getRegNo());
		CarList[index].setYear(c.getYear());
		index+=1;
		return 1;
	}
}
bool Garage::Find(string reg)
{
	for(int x=0;x<capacity;x++)
	{
		if(CarList[x].getRegNo()==reg)
		{return 1;}
		else 
		return 0;
	}
}
bool Garage::Remove(string reg)
{

	for(int x=0;x<index;x++)
	{
		if(CarList[x].getRegNo()==reg)
		{				
			for(int y=x;y<index-1;y++)
			{
				CarList[y].setCarModel(CarList[y+1].getCarModel());
				CarList[y].setMake(CarList[y+1].getMake());
				CarList[y].setRegNo(CarList[y+1].getRegNo());
				CarList[y].setYear(CarList[y+1].getYear());
					
			}
			index--;
			return 1;
		}
	}
}

void Garage::Display()
{
	for(int x=0;x<index;x++)
	{
		cout<<CarList[x].getMake()<<endl;
		cout<<CarList[x].getCarModel()<<endl;
		cout<<CarList[x].getRegNo()<<endl;
		cout<<CarList[x].getYear()<<endl;
	}
}
/*virtual ~Garage()
{
	delete [] CarList;
}*/
