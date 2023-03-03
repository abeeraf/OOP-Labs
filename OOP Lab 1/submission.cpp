#include<cmath>
#include<iostream>
using namespace std;

void sumFloats(float* w,float* x,float* y,float* z)
{	
	*z=*w+*x+*y;	
}

void sortArray1(int arr[],int s)
{
	int temparray[s],c=0;
	for (int x=0;x<s;x++)
	{
		if ((arr[x]%2)==1)
		temparray[c++]=arr[x];	
	}

	for (int x=0;x<s;x++)
	{
		if ((arr[x]%2)==0)
		temparray[c++]=arr[x];	
	}
	
	for (int x=0;x<s;x++)
	{
		arr[x]=temparray[x];	
	}

}

void sortArray2(int arr[],int s)
{	
	 
	int evecount=0,temp=0,y=0,c=0;
	
	for(int a=0;a<s;a++)
	{
		if(arr[a]%2==0)
		{evecount++;}
				
	}		
	
	for(int x=0;c>evecount;x++)
	{		
		
		if(arr[y]%2==0)
		{	c++;
			temp=arr[y];
			for(int a=y;a<s;a++)
			{
				arr[a]=arr[a+1];
			}
			arr[s-1]=temp;
		}
		else if(arr[y]%2==1)
		y++;
	}
	
	
	for(int x=0;x<(s-(1+evecount));x++)
    	{
        	for(int y=x+1; y<(s-(evecount)); y++)
        	{
		   	 if(arr[y] < arr[x])
		    	{
		       	 	temp = arr[x];
		        	arr[x] = arr[y];
		        	arr[y] = temp;
		    	}
		}
        }
	
	
	for(int x=(s-(evecount));x<s;x++)
	{
		for(int y=x+1; y<s; y++)
        	{
		   	 if(arr[y] < arr[x])
		    	{
		       	 	temp = arr[x];
		        	arr[x] = arr[y];
		        	arr[y] = temp;
		    	}
		}
        }
}


void reverseArray1(int arr[],int s)
{
	int rev[s],z=s-1;

	for(int x=0;x<s;x++)
	rev[x]=arr[z--];

	for(int x=0;x<s;x++)
	arr[x]=rev[x];
}
void reverseArray2(int arr[],int s)
{	int temp;
	if (s%2==0)
	{	for(int x=0;x<(s/2);x++)
		{
			temp=*(arr+x);
			*(arr+x)=*(arr+(s-x-1));
			*(arr+(s-x-1))=temp;
		}
	}
	else if (s%2==1)
	{	for(int x=0;x<((s-1)/2);x++)
		{
			temp=*(arr+x);
			*(arr+x)=*(arr+(s-x-1));
			*(arr+(s-x-1))=temp;
		}
	}
}

float cubeRoot(int *p)
{
	float z;
	int a=*p;
	z=pow(a,1.0/3.0);
	return z;
}

void mutliplyBy2(double *p, int s)
{
	for(int x=0;x<s;x++)
	*(p+x)=*(p+x)*2;
}
 int lengthOfString(char* t)
{	
	int length=1,x=0;

	cout<<"String  is: ";

	while(t[x]!='\0')
	{
		cout<<t[x]<<",";
		length++;
		x++;
	}

	cout<<"length of string is: "<<length<<endl;
	cout<<"starting address of string is: "<<&t<<endl;
	return length;
	
}

void allocateMemory(int* &p1,int* &p2)
{
	//your code here
}

void deallocateMemory(int *p1, int *p2)
{
	
}
void createArray()/*{
	int*p;
	int*q;
	int*r;
	int*pqr;
	ptr=new int*[3];
	p=new int*[5];
	q=new int*[5];
	r=new int*[5];
	ptr[0]=p;
	ptr[1]=q;
	ptr[2]=r;

	for(int x=0;x<3;x++)
	{for(int y=0;y<5;y++)
	cout<<*(*(ptr+x)+y);
}
}



