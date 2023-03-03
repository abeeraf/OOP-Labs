#include <iostream> 
#include <fstream>
#include <cstring>
using namespace std;

void printLines(int n,string name)
{
	/*string f;
	fstream object;
	object.open(name,ios::in);
	int x=0;

	while (getline(object,f)  ) 
	{
		x++;
	}

	object.close();

	ifstream nobj;
	nobj.open(name);

	int a=0;
	while (!nobj.eof())
	{	a++;
		if (a>=x-n+1)
		{
			string f;
			getline(nobj,f,'\n');
			cout<<f<<endl;
		}			
	}
	nobj.close();
	cout<<x;
	*/
	fstream object; 
	int x=0;
	string* array=new string[100];
	object.open(name,ios::in);
	string l;
	while (!object.eof())
	{
		string first;
		getline(object,first,'\n');
		array[x++]=first;
		//cout<<array[n-1];
	}
	if(x>=n)
	{	for(int a=n;a<=0;a++)
		{
			cout<<array[x-a+1]<<endl;
		}
	}
	else 
	{
		for(int a=0;a<n;a++)
		{
			cout<<array[a]<<endl;
		}
	}

}
/*
int main()
{	
printLines(5,"Students.txt");

}*/






