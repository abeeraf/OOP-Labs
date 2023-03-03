#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

///////Task 1////////////////////////////////////////////////
class Sale{
private:
	double itemCost;
	double taxRate;
public:
	Sale(){}

	Sale(double cost, double rate = 0.05)
	{ 
		itemCost=cost;
		taxRate=rate;
	}
	void setCost(double cost)
	{
		itemCost=cost;
	}
			
	double getItemCost() 
	{ 
		return itemCost;
	}
	
	void setTaxRate(double rate)
	{
		taxRate=rate;
	}

	double getTaxRate()
	{
		return taxRate;
	}

	double getTax() 
	{
		return itemCost*taxRate;
	}

	double getTotal()
	{  
		itemCost+getTax();
	}
};
 ////Task 2///////////////////////////////////////////////////
class Box
{ 
	private:
	int Length;
	int Width;
	int Height; 
	string Material;
	string Color;
	
	public:
	Box()
	{
		Material="card";
	}
	Box(int len,int wid,int hei, string mat, string col)
	{
		Length=len;
		Width=wid;
		Height=hei;
		Material=mat;
		Color=col;
	}
	void setLength(double l)
	{ Length=l;
	}

	void setBreadth(double b)
	{Width=b;
	}

	void setHeight(double h)
	{ Height=h;
	}

	double getLength()
	{ return Length;
	}

	double getHeight()
	{ return Height;
	}

	double getBreadth()
	{ return Width;
	}

	string getColor()
	{ return Color;
	}

	void setColor(string c)
	{ Color=c;
	}

	string getMaterial()
	{ return Material;
	}

	double getVolume()
	{ return (Width*Height*Length);
	}

	double getSurfaceArea()
	{ return 2*(((Width*Height)+(Height*Length)+(Length*Width)));
	}

	void print()
	{ 
		cout<<"Length:"<<Length;
		cout<<"Height"<<Height;
		cout<<"Width"<<Width;
		cout<<"Material"<<Material;
		cout<<"Color"<<Color;
		cout<<"Volume"<<getVolume();
		cout<<"Surface Area"<<getSurfaceArea();
	}

	bool update(Box b[], int size, int index, double height)
	{ 
		b[index].Height=height;
	}
};
////Task 3////////////////////////////////////////////////////////

class Container{
private:
int* values;
int capacity;
int counter;
static int a;
public:
Container(int c)
{
	capacity=c;
	values= new int[c];
	counter=0;
}
Container(){}

bool isFull( )
{
	if(counter==capacity)
	return 1;
	else 
	return 0;
	
}

void insert(int val) 
{
	if(isFull()==0)
	{
		values[counter++]=val;
	}
}

bool search( int  val) 
{ 	
	for(int x=0;x<counter;x++)
	{
		if(values[x]==val)
		{a++;return 1;}
	}
}

void remove(int val) 
{ 
	if(search(val)==1)
	{
		for(int x=a;x<counter;x++)
		{
			values[x]=values[x+1];
		}
		values[counter-1]=0;
		counter--;
	}
		
}

void Print( )
{ 
	for(int x=0;x<counter;x++)
	{
		cout<<values[x]<<",";
	}
}
};
int Container:: a=0;

////Task 4/////////////////////////////////////////////////////////
class CoffeeShots
{
private:
string type;
double price;
float volume;
char size;
public:	
 CoffeeShots(double p,float v,string t="latte")
 {	
	type=t;;
	price=p;
	volume=v;
	size='s';
 }
	
 void setPrice(double pricer)
 { price=pricer;
 }

 double getPrice()
 { return price;
 }

 float getVolume()
 { return volume;
 }

 string getType()
 { return type;
 }

 char getSize()
 { return size;
 }

 void upSize()
 {
	volume+=5;
	price+=5;
	
	if((volume<50)&&(volume>0))//they said between the values 
	{size='s';}
	else if((volume<75)&&(volume>51))
	{size='m';}
	else if(volume>75)
	{size='l';}
	
 }

 float spillOver(float vol)
 { 
	volume-=vol;
 }

 void print()
 {
	cout<<"Price:"<<price<<endl;
	cout<<"Volume:"<<volume<<endl;
	cout<<"size:"<<size<<endl;
 } 
};
//A NON MEMBER FUNCTION
/* CoffeeShots& createMyCofee()
 {
	double p;
	float v;
	float sp;
	
	cout<<"Enter Price"<<endl;
	cin>>p;
	cout<<"Enter Volume"<<endl;
	cin>>v;
	cout<<"Enter Spill Over Volume"<<endl;
	cin>>sp;
	CoffeeShots* Mine;
	CoffeeShots object;	
	*Mine=&object;
	Mine->CoffeeShots(p, v, t=0);
	Mine->setPrice(p);
	Mine->getPrice;
	Mine->getVolume;
	Mine->getType;
	Mine->getSize();
	Mine->spillOver(sp);
	Mine->print;
	
	return Mine;
	
	
}*/
   

////Task 5////////////////////////////////////////////////////
class IntegerList{

private:
int* list;
int numElements;

public:
 IntegerList(int no)
  { 
	list= new int [no];

	for (int x=0;x<no;x++)
	{	list[x]=0;
	}
  }

 ~IntegerList()
 {delete []list;
 } 

  bool isValid(int sub)
  { 
	if((sub>0)&&(sub<=numElements-1))
	return 1;
	else 
	return 0;
  }

 void setElement(int ind, int vali)
 {
	if(isValid(ind)==1)
	{
		list[ind]=vali;
	}
	else 
	exit(EXIT_FAILURE);
 } 

 int getElement(int indi)
 {
	if(isValid(indi)==1)
	{
		return list[indi];
	}
	else 
	exit(EXIT_FAILURE);
 }
};

////Task 6////////////////////////////////////////////////////

class Car{
private:
string regNo;
int entryTime;
int exiteTime;
public:
void setregNo(string g)
{
	regNo=g;
}
string getregNo	()
{
	return regNo;
}
void setentryTime(int a)
{
	entryTime=a;
}
int getentryTime()
{
	return entryTime;
}
void setexiteTime(int b)
{
	if(b>getentryTime())
	exiteTime=b;
	else
	cout<<"Invalid Entry"<<endl;
}
int getexiteTime()
{
	return exiteTime;
}
};

class ParkingGarage{
private:
const int capacity=0;
int noOfOccupied;
Car* info;
double amountCollected;
int remain;
public:
ParkingGarage():capacity(5)
{
	///////////////capacity=5;
	noOfOccupied=0;
	info=new Car[capacity];
	amountCollected=0;
}

 ParkingGarage(int c):capacity(c)
 {
	
	noOfOccupied=0;
	info=new Car[capacity];
	amountCollected=0;
 } 

void setnoOccupied(int a)
{
	if(a<=capacity)
	 noOfOccupied=a;
	else 
	cout<<"Invalid Entry";
}
int getnoOccupied(int a)
{
	return noOfOccupied;
}

void setRemainingCapacity(int capacity, int noOfOccupied)
{	
	remain=capacity-noOfOccupied;

}
int getRemainingCapacity() const
 {
	return remain;
 }

 double getAmountCollected() const
 {
	int total=0;
	for(int x=0;x<noOfOccupied;x++)
	total+=(info[x].getexiteTime()-info[x].getentryTime())*20;
	return total;
 }
 
bool isFull(int size,int index)const
 {
	if(index==size)
	return 1;
	else 
	return 0;
 }

 bool ParkCar( string &regnNumber,int entryTime )
 {
	if(noOfOccupied<capacity)
	{
		info[noOfOccupied-1].setregNo(regnNumber);
		info[noOfOccupied-1].setentryTime(entryTime);
		return 1;
	}
	else
	return 0; 
}
};


 ////Task 7///////////////////////////////////////////////////
class Student{
private:
int rollNo; 
string name;
string address;
int batch;
public:
Student()
{
name="NULL";
rollNo=0;
address="NULL";
batch=0;

}

 Student(int r,  string &n,  string &ad, int b)
 {
name=n;
rollNo=r;
address=ad;
batch=b;
 }

 bool setRollNo(int r) 
 {
	if (r>=0)
	{
		rollNo=r;return 1;
	}
	else 
	return 0;
 } 

 int getRollNo() 
 {return rollNo;
 }

 bool setName( string &n) 
 {
	int c=0;
	while (n[c++]!='\0')
	
	if (c<=50)
	{
		name=n;return 1;
	}
	else 
	return 0;

 }

 string getName()
 {
	return name;
 }

 bool setAddress(const string& ad) 
 {
	int c=0;
	while (ad[c++]!='\0')
	if (c<=90)
	{
		address=ad;return 1;
	}
	else 
	return 0;
 }
 
 string getAddress() 
 {
	return address;
 }

 bool setBatch(int b) 
 {
	if (b>=0)
		{
			batch=b;return 1;
		}
		else 
		return 0;
 }
 
 int getBatch()
 {return batch;
 }
};

class Section{
private:
string sectionName;
const int sectionStrength;
int currentStudent;
Student* studentPtr;
public:
 
Section():sectionStrength(0)
 {
	sectionName='\0';
	studentPtr=0;
	currentStudent=0;
	studentPtr=new Student[sectionStrength];
 }

 Section (int s , char name):sectionStrength(s)
 {
	sectionName=name;
	studentPtr=0;
	currentStudent=0;
	studentPtr=new Student[sectionStrength];
 }

 bool setSectionName(string &n) 
 {	string k=n;
	int c=0;
	while (n[c++]!='\0')
	
	if (c<=50)
	{
		sectionName=k;return 1;
	}
	else 
	return 0;

 }

 string getSectionName()
 {return sectionName;
 }

 int getcurrentStudent()
 {
	return currentStudent;
 }

 bool addStudent(int r, string &n, string &ad, int b )
 {
	string k=n;
	studentPtr[currentStudent].setRollNo(r);
	studentPtr[currentStudent].setName(k);
	studentPtr[currentStudent].setAddress(ad);
	studentPtr[currentStudent].setBatch(b);
	currentStudent++;
	
 }

 bool deleteStudent() 
 {	string k="NULL";
	studentPtr[currentStudent].setRollNo(0);
	studentPtr[currentStudent].setName(k);
	studentPtr[currentStudent].setAddress(k);
	studentPtr[currentStudent].setBatch(0);
 }

 string SearchStudent(int r) 
 {
	for(int x=0;x<sectionStrength;x++)
	if (studentPtr[x].getRollNo()==r)
	return studentPtr[x].getName();
	else 
	return "NOT FOUND";
	
 }
};
int main()
{//2.6
	Box* b;
	b=new Box[5];

	int w=5,h=8,g=3,newind,newHeight;

	for(int x=0;x<5;x++)
	{
		b[x].setLength(w++);
		b[x].setBreadth(h++);
		b[x].setHeight(g++);
		b[x].setColor("Red");
	}
//2.7	
	for(int x=0;x<5;x++)
	{
		b[x].print();
	}
	
//2.8	
	cout<<"Enter Index and New Height";
	cin>>newind>>newHeight;
	b[newind].setHeight(newHeight);
	b[newind].print();


}


