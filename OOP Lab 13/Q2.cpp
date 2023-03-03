#include <iostream> 
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
fstream object;

object.open("Students.txt", ios::in);

while (!object.eof())
{
	string roll;
	getline(object,roll,'\n');
	cout<<roll;
	cout<<endl;
	
}

object.close();
}
