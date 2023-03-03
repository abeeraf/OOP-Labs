#include<iostream>
using namespace std;


int main()
{	
	
	/*char arr[]={'a','b','d','c','\0'},s=5;
	char* t=arr;
	char* t="This is a test String";*/
	/*int evecount=0,temp,y=0;

	for(int a=0;a<s;a++)
	{
		if(arr[a]%2==0)
		{evecount++;}
				
	}	
	
	int start=0,end=(s-1);
	while(start<end)	
	{
		if(arr[a]%2==1)
		{start++;}
		
		else if(arr[a]%2==0)
	

	/*for(int x=0;x<s;x++)
	{		
		if(arr[y]%2==1)
		{y++;}
		else if(arr[y]%2==0)
		{	
			temp=arr[y];
			for(int a=0;a<s;a++)
			{
				arr[a]=arr[a+1];
			}
			arr[s-1]=temp;y++;
		}
		
	}

for(int a=0;a<s;a++)
{
				cout<<arr[a]<<",";
			}
cout<<endl;
cout<<evecount<<y;
cout<<endl;
	for(int x=0;x<(s-(1+evecount));x++)
    	{
        	for(int y=x+1; y<(s-(1+evecount)); y++)
        	{
		   	 if(arr[y] < arr[x])
		    	{
		       	 	temp = arr[x];
		        	arr[x] = arr[y];
		        	arr[y] = temp;
		    	}
		}
        }
	
	
	for(int x=(s-(1+evecount));x<s;x++)
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
for(int a=0;a<s;a++)
{
				cout<<arr[a]<<",";
			}
}



void reverseArray2(int arr[],int s)
{
	int temp;
	if (s%2==0)
	{	for(int x=0;x<(s/2);x++)
		{
			temp=*(arr+x);
			*(arr+x)=*(arr+s-x);
			*(arr+s-x)=temp;
		}
	}
	else if (s%2==1)
	{	for(int x=0;x<(s-1/2);x++)
		{
			temp=*(arr+x);
			*(arr+x)=*(arr+s-x);
			*(arr+s-x)=temp;
		}
	}
}

int temp;
	if (s%2==0)
	{	for(int x=0;x<(s/2);x++)
		{
			temp=arr[x];
			arr[x]=arr[s-x];
			arr[s-x]=temp;
		}
	}
	else if (s%2==1)
	{	for(int x=0;x<(s-1/2);x++)
		{
			temp=arr[x];
			arr[x]=arr[s-x];
			arr[s-x]=temp;
		}
	}
*/
/*int temp;
	if (s%2==0)
	{	for(int x=0;x<(s/2);x++)
		{
			temp=arr[x];
			arr[x]=arr[s-x-1];
			arr[s-x-1]=temp;
		}
	}
	else if (s%2==1)
	{	for(int x=0;x<((s-1)/2);x++)
		{
			temp=arr[x];
			arr[x]=arr[s-x-1];
			arr[s-x-1]=temp;
		}
	}

for(int x=0;x<s;x++)
cout<<arr[x]<<",";*/

/*int length=0,x=0;
	cout<<"String  is: ";
	while((arr[x])!='\0')
	{cout<<arr[x]<<",";length++;x++;}
	cout<<"length of is: "<<length<<endl;
	cout<<"starting address of string is: "<<&t<<endl;
int length=0,x=0;

	cout<<"String  is: ";

	while(t[x]!='\0')
	{
		cout<<*(t+x)<<",";
		length++;
		x++;
	}

	cout<<"length of string is: "<<length<<endl;
	cout<<"starting address of string is: "<<&t<<endl;*/
int arr[]={2,1,6,4,8,10,13,14,16},s=9;
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
	for(int a=0;a<s;a++)
{
				cout<<arr[a]<<",";
			}
cout<<endl;
cout<<evecount<<y;
cout<<endl;
	
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
for(int a=0;a<s;a++)
{
				cout<<arr[a]<<",";
			}
cout<<endl;
cout<<evecount<<y;
cout<<endl;
}





