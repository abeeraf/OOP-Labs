#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class TeleDirectory
{
string *name ;
string *number ;
string *address;
int count ;
public :
		
TeleDirectory(string *a, string *b , string *c, int val)
{
	string reader;
	count =val;
	fstream object("teledir.txt" , ios::out);
	name=a;
	number=b;
	address=c;
	name= new string [count];
	number=new string [count];
	address=new string [count];
	for (int i=0 ; i<count; i++)
	{
		name[i]=a[i];
		number[i]=b[i];
		address[i]=c[i];				
}
for (int x=0 ; x<count ; x++)
{
	obj<<name[x]<<" "<<number[x]<<" "<<address[x]<<endl;	
}
			
			
object.close();	
			
}
		
string searchByName(string s)
{
	for (int x=0 ; x<count ; x++)
	{
		if (s==name[x])
		{
		return number[x];
		}			
	}
}
string searchByNumber(string a)
{
	for (int x=0 ; x<count ; x++)
	{
		if (a==number[x])
		{
			return name[x];	
		}
	}
}
void printDirectory()
{
	ifstream first;
	first.open("teledir.txt" , ios::in);
	string f;
	if (first.is_open())
	{
		for (int x=0 ; x<count ; x++)
		{
			getline(first,f,'\n');
			cout<<f<<endl;
		}
	}
	else
	{
		cout<<"open file";	
	}
	first.close();
}
	
};
int main ()
{
	int a ;
	string *name , *add , *num;
	
	cout<<"Enter number of people"<<endl;
	cin>>a;

	name=new string [a];
	add=new string [a];
	num=new string [a];
	
	for (int x=0 ; x<a ; x++)
	{
		int roll; string a;
		cout<<"Enter Name";
		cin>>a;
		name[x]=a;

		cout<<"Enter No.";
		cin>>roll;
		num[x]=roll

		cout<<"Enter Address";
		cin>>a;
		add[x]=a;	
	
	}
	
	TeleDirectory T(name,num,add,a);
	T.printDirectory();

}
