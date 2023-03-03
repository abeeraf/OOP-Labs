#include<iostream>
using namespace std;

int magicSum(int x,int y)
{	
		if(x<1)
		return y;

		else 
		return x+magicSum(x-1,y);
}

void Collatz(int n)
{
	cout<<n<<" ";
	if((n!=1)&&(n%2==0))
	{
		 Collatz( n/2);
	}

	else if((n!=1)&&(n%2==1))
	{
		Collatz(3*n+1);
	}
}

int CountCannonballs(int h)
{
	if (h==1)
	return 1;
	
	else 
	{
		return h*h+CountCannonballs(h-1);
	}
}

int parseToInteger(char* s,int length)
{	if (length<1)
	return 0;
	else 
	return (s[length-1]-48)+parseToInteger(s,length-1)*10;
}

void printloop(int times,char token)
{	
	if (times>0)
	{cout<<token;
	printloop(times-1,token);
	}
}

void PrintPattern1(int n)
{
if(n>1)	
		{printloop(n,'*');
		cout<<endl;
		PrintPattern1(n-1);
		cout<<endl;
		printloop(n,'*');}
		
else if(n==1)
		{printloop(1,'*');}
}
void PrintPattern2(int n,int space=0)
{

if(n>1)	
		{
		printloop(space,' ');
		printloop(n,'*');
		cout<<endl;
		PrintPattern2(n-2,space+1);
		cout<<endl;
		printloop(space,' ');
		printloop(n,'*');
		}
		
else if(n==1)
		{
		printloop(space,' ');
		printloop(1,'*');
		printloop(space,' ');
		}
}

struct PhoneNumber
{
	int areaCode;
	int exchange;
	int number;
};

void PhoneNumberArrayIntialize(PhoneNumber arr[],int s)
{
	for(int x=0;x<s;x++)
	{	arr[x].areaCode=111+x;
		arr[x].exchange=767+x;
		arr[x].number=1011+x;
	}
}
/*void PrintPhoneNumber(PhoneNumber p)
{
	
		cout<<"("<<arr[p].areaCode<<")"<<arr[p].exchange<<"-"<<arr[p].number<<endl;
	
}*/

main()
{	/*char s[100]="12";
	cout<<magicSum(5,2);
	Collatz(7);
	cout<<endl;
	cout<<parseToInteger(s,2);*/
	//PrintPattern1(5);
	/*int s=3;
	PhoneNumber arr[3];
	for(int x=0;x<s;x++)
	{	arr[x].areaCode=111+x;
		arr[x].exchange=767+x;
		arr[x].number=1011+x;
	}
	cout<<endl;
	PrintPattern2(9);
	PhoneNumberArrayIntialize(arr,3);
	//PrintPhoneNumber(2);
	cout<<"("<<arr[2].areaCode<<")"<<arr[2].exchange<<"-"<<arr[2].number<<endl;
*/




}









	
