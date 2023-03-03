#include <iostream> 
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
fstream object;

object.open("Students.txt", ios::out);

for(int x=0;x<10;x++)
{
	int roll; string a;
	cout<<"Enter roll no.";
	cin>>roll;
	object<<roll<<" ";
	cout<<"Enter First Name.";
	cin>>a;
	object<<a<<" ";
	cout<<"Enter Last Name";
	cin>>a;
	object<<a<<" ";
	cout<<"Enter Department";
	cin>>a;
	object<<a<<" ";
	cout<<"Enter Section";
	cin>>a;
	object<<a<<"."<<endl;

}
object.close();
}
