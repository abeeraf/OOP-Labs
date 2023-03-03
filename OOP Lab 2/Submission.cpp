/*
 * Submission.cpp
 *
 *  Created on: Feb 5, 2018
 *      Author: Dell
 */
#include<iostream>
#include<cstdlib>
using namespace std;


void LabTask1(int *&p, int &size) {

	srand(time(0));

	p = new int[size];  
	for (int x=0; x<size; x++) 
	{
		p[x] = rand()%51;    
	}
	for (int x=0; x<size; x++) 
	{
		p[x] *=p[x];
	}
}
int LabTask2(int* a[]) {

	int max;
	srand(time(0));
	
	for (int x=0; x<4; x++) 
	{
		a[x] = new int[4];  		
  
	}

	for (int x=0; x<4; x++) 
	{
		*a[x] = rand()%51;  		
  
	}
	max=*a[1];
	for (int x=0; x<4; x++) 
	{	
		if(*a[x]>max)
		max = *a[x]; 		
  
	}
	
	return max;
}
void LabTask3(){

int a[6],b[6],c[6],d[6],e[6],t=0,k=0;
int* p[5];
p[1]=a;
p[1]=b;
p[3]=c;
p[4]=d;
p[5]=e;
int sum[5];

for (int y=0; y<5; y++) 
	{
	for (int x=0; x<6; x++) 
		{
			p[y][x]= rand()%51;
			sum[t]+=p[y][x];k++;
			if (k%5==0)
			{t++;}

		}
	}

for (int y=0; y<5; y++) 
	{cout<<"Sum of Array "<<y+1<<" is "<<sum[y]<<endl;}
}

void LabTask3B(int ncols){
	int a[ncols],b[ncols],c[ncols],d[ncols],e[ncols],t=0,k=1;
int* p[5];

for (int x=0; x<5; x++) 
	{
		p[x] = new int[ncols];  		
  
	}

p[1]=a;
p[1]=b;
p[3]=c;
p[4]=d;
p[5]=e;



int sum[5];

for (int y=0; y<5; y++) 
	{
	for (int x=0; x<ncols; x++) 
		{
			p[y][x]= rand()%51;
			sum[t]+=p[y][x];k++;
			if (k%5==0)
			{t++;}

		}
	}

for (int y=0; y<5; y++) 
	{cout<<"Sum of Array "<<y+1<<" is "<<sum[y]<<endl;}
}


void LabTask3C(int ** &p, int nrows, int ncols){
	p = new int*[nrows];
	for (int x=0; x<3; x++) 
		{ 
			p[x] = new int[ncols];
		}
}
void LabTask3D(int **p, int nrows, int ncols){
	for (int x=0; x<nrows; x++) 
		{ 	
	
		delete []p[x];
		
		}
	
	delete []p;
}


int ** LabTask3E(int nrows, int ncols){
	int **matrixA,**matrixB,**matrixC;
	matrixA = new int*[nrows];
	matrixB = new int*[nrows];
	matrixC = new int*[nrows];
	for (int x=0; x<3; x++) 
		{ 
			matrixA[x] = new int[ncols];
			matrixB[x] = new int[ncols];
			matrixC[x] = new int[ncols];
		}
	
for (int y=0; y<nrows; y++) 
	{
	for (int x=0; x<ncols; x++) 
		{
			matrixA[y][x]= rand()%51;
			matrixB[y][x]= rand()%51;
			matrixC[y][x]=matrixA[y][x]+matrixB[y][x];
		}
	}
for (int x=0; x<nrows; x++) 
		{ 	
	
		delete []matrixA[x];
		delete []matrixB[x];
		}
	
	delete []matrixA;
	delete []matrixB;
return matrixC;
}


int LabTask4(int **p, int sizeA, int sizeB){
	int sum=0;	
	
	for(int x=0;x<sizeA;x++)
	{
		sum+=p[x][0];
		sum+=p[x][sizeB-1];
	}

	for(int x=1;x<(sizeB-2);x++)
	{
		sum+=p[1][x];
		sum+=p[1][x];
	}
	return sum;
}


void LabTask5(int **&p, int csize, int nsize){
	int **np= new int [nsize];
for (int x=0;x<csize;x++)
	np[x]=p[x];
delete []p;
p=np;

}

void LabTask6(){
	int a=5,*p=new int[a],x=0;
	while(p[x]!=-1)
	{
		cout<<"Enter Number";
		cin>>p[x];x++;
		
		if(x==a)
		{a=2*a;
		p=new int[a];}
	}
	//function was created as void in submission eventhough a return value is asked
}
void LabTask7(int **p, int *odd){
int count=0;

	p = new int*[3];
	for (int x=0; x<3; x++) 
		{ 
			p[x] = new int[5];
		}
	

for (int y=0; y<5; y++) 
	{
	for (int x=0; x<3; x++) 
		{ 
		
		p[x][y]=rand()%51;
		
		if (p[x][y]%2==1)
		count++;
		}
	}

		odd=new int;
	
int a=0;
for (int y=0; y<3; y++) 
	{
	for (int x=0; x<5; x++) 
		{ 
		if (p[y][x]%2==1)
		odd[a]=p[y][x];a++;
		}
	}
}


int LabTask8(int***&p, int npages,  int rows, int cols){
		
			p=new int**[npages];
	
	for (int x=0; x<npages; x++) 
		{ 
			p[x]=new int*[rows];
		
		for (int z=0; z<rows; z++) 
			{ 
				p[x][z]=new int[cols];
			}
		}
	
}

int LabTask9(int***p, int npages,  int rows, int cols){
	for (int x=0; x<rows; x++) 
		{ 	
		for (int z=0; z<cols; z++) 
				{ 
					delete []p[rows][cols];
				}
		delete []p[rows];
		
		}
	
	delete []p;
}
int ** LabTask10(int nrows, int ncols) {
	int ***tdp;
tdp=new int**[3];
	
	for (int x=0; x<3; x++) 
		{ 
			tdp[x]=new int*[nrows];
		
		for (int z=0; z<nrows; z++) 
			{ 
				tdp[x][z]=new int[ncols];
			}
		}
	
	for (int x=0; x<2; x++) 
		{ 
		
		for (int y=0; y<nrows; y++) 
			{ 
				for (int z=0; z<ncols; z++) 
				{ 
				tdp[x][y][z]=rand()%51;
				}
			}
		}
	for (int y=0; y<nrows; y++) 
			{ 
				for (int z=0; z<ncols; z++) 
				{ 
				tdp[2][y][z]=tdp[1][y][z]+tdp[0][y][z];
				}
			}
	return tdp[2];





}

int ** LabTask11(int nrows, int ncols) {
	//NEVER STUDIED MATRIX MULTIPLICATION!
}

