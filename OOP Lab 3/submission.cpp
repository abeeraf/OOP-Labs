#include<iostream>
#include<cstring>

using namespace std;

void funcl(int n)
{	n=n+1;
	for (int x=1;x<n*2;x++)
	{	int a=x,b=n*2-x;
		if (x<n)		
		cout<<a;
		else if (x>n) 
		cout<<b;
	}

}

void func1WithRecursion()
{
if(s<0)
	return;

	else if (s<=n)
	{cout<<s;
	func1WithRecursion(n,s+1);
	cout<<s;
	}
}

int count(int n)
{
int count=1;
	int count=1;
	while (n/10!=0)
	{	n=n/10;
		count++;
	}
	cout<<count;
	return count;
}

int countWithRecursion(int n)
{

	if (n<10)
	return 1;
	else 
	{ 
		return 1 + countWithRecursion(n/10);	
	}
}

int pow(int b,int e)
{	int sum=1;

	for(int x=0;x<e;x++)
	{sum*=b;}
	
	return sum;
}

int powWithRecursion(int b,int e)
{
if(e==0)
	return 1;
	
	else 
	{ 
		return b * powWithRecursion(b,e-1);	
	}
}


int decimalToOctal(int n)
{
	int rem,count=0;
	while(n!=0)
	{	rem=n%8;
		if (rem>=5)
		count++;
		n=n/8;
	}
	cout<<count;
	return count;
}

int decimalToOctalWithRecursion(int n)
{
	if (n%8<5)
	return 0;

	else 
	{return 1+decimalToOctalWithRecursion(n/8);}
}

bool isPalindrome(const char* str,int s,int l)
{
	if(str[s]!=str[l-1])
	return false;

	else
	{return true;isPalindrome ( str,s+1, l-1);}
	

}


string Reverse(string s,int length)
{	
	if (length >= 1)
	{return s[length-1]+Reverse(s,length-1);+
	else 
	{return "";}
}


int fab(int n)
{
	if(n==1 or n==2)
	return 1;
	
	else
	return (fab(n-1)+fab(n-2));
}

char* replace(char* s,char f,char t)
{
//write your code here for task 12
}

int FindMax(int arr[],int Index, int length)
{
	if (length+Index-1<Index)
	return 0;

	else if(arr[Index+length-2]>arr[Index+length-3])
	{return arr[Index+length-2],FindMax(arr,Index, length-1);}
	
}

void printChar(char ch,int t){
if (t>0)
	{cout<<ch;
	printChar(ch,t-1);
	}
 }

void PrintPattern(int n,int k){
if(n>k)
		return;
		
		else if(n==k)		
		cout<<n;
		else if (n<k)
		{
		cout<<n;
		printChar('+',n);
		PrintPattern(n+1,k);
		printChar('*',n);
		cout<<n;
		}
}
 


void printloop(int times, char token)
{	
	if (times>0)
	{cout<<token;
	printloop(times-1,token);
	}
}
void PrintPattern3(char ch,int lines){
	if(lines>0)
		{
		PrintPattern3(ch,lines-1);
		cout<<endl;
		printloop(lines,ch);
		}
}


void PrintPattern4(char ch,int lines, int start)
{
if(lines>=0)
		{printloop(start,' ');
		printloop(lines,ch);
		cout<<endl;
		PrintPattern4(ch,lines-1,start+1);
		
		}
}


void PrintPattern6(char ch,int lines, int start)
{

if(lines>=1)
		{
		
		printloop(lines,' ');
		printloop(start,ch);
		cout<<endl;
		PrintPattern6(ch,lines-1,start+1);
		printloop(lines,' ');
		printloop(start,ch);
		cout<<endl;
		}
if(lines==0)
	{
	printloop(start,ch);cout<<endl;}
}

 
 
 
 
 
