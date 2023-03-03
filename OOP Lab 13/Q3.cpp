#include <iostream> 
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
fstream object;
fstream obj2;

object.open("f1.txt",ios::in);
obj2.open("f2.txt",ios::in);

while (!object.eof() && !obj2.eof())
{
	string first,second;
	getline(object,first,'\n');
	getline(object,second,'\n');
	if(first!=second)
	{
		cout<<"<"<<first<<endl;
		cout<<"<"<<second<<endl;
	}
}

object.close();
obj2.close();
}
