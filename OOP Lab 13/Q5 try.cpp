#include <iostream> 
#include <fstream>
#include <cstring>
using namespace std;

class TeleDirectory{

string name; 
string address;
int number;

public:
TeleDirectory()
{

}
void setname(string str)
{
	name=str;
}
void setnumber(int no)
{
	number=no.
}
void setadd(string add)
{
	address=add;
}
string searchByNumber(int num)
{
	while (!object.eof())
	{
		fstream object;
		string str;
		object.open("teledir.txt",std::ios::in)
		getline(object,str,' ');
		
		if (number==num)
		return name;
	}
}
int searchByName(string nam)
{

}
void printDirectory()
{
	while (!object.eof() )
	{
		string first;
		getline(object,first,'\n');
		cout<<first<<endl;
	}
}
};


int main()
{
	int x=0;
	TeleDirectory store[100];
	
	fstream object;
	object.open("teledir.txt",std::ios_base::app);
		
		int roll; string a;
		cout<<"Enter Name";
		cin>>a;
		object<<a<<" ";
		store[x].setname(a);

		cout<<"Enter No.";
		cin>>roll;
		object<<roll<<" ";
		store[x].setnumber(roll);

		cout<<"Enter Address";
		cin>>a;
		object<<a<<" "<<endl;
		store[x++].setadd(a);		
		
	object.close();
	

}




