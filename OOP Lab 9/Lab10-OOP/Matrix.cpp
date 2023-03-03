#include "Matrix.h"
#include<iostream>
using namespace std;

Matrix::Matrix()
{
	rows=2;
	columns=2;
	matrix= new int *[rows];
	for (int x=0;x<rows;x++)
	matrix[x]=new int [columns];

	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{
			matrix[x][y]=0;
		}
	}
}
Matrix::Matrix(int a, int b)
{
	rows=a;
	columns=b;
	matrix=new int *[rows];
	for (int x=0;x<rows;x++)
	matrix[x]=new int [columns];
	
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{
			matrix[x][y]=0;
			
		}
	}
}
Matrix::Matrix(const Matrix & obj)
{
	rows=obj.rows;
	columns=obj.columns;
	matrix=new int *[rows];
	for (int x=0;x<rows;x++)
	matrix[x]=new int [columns];
	
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			matrix[x][y]=obj.matrix[x][y];
		}
	}
}
Matrix& Matrix::operator=(const Matrix &obj)
{	
	rows=obj.rows;
	columns=obj.columns;
	matrix=new int *[rows];
	for (int x=0;x<rows;x++)
	matrix[x]=new int [columns];
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			matrix[x][y]=obj.matrix[x][y];
		}
	}
	return *this;	
}
bool Matrix::operator==(const Matrix &obj)
{
	int c=0;
	if (rows==obj.rows && columns==obj.columns)
	{
		for (int x=0;x<rows;x++)
		{
			for (int y=0;y<columns;y++)
			{	if(matrix[x][y]==obj.matrix[x][y])	
				c++;
			}
		}
	if (c==obj.rows*obj.columns)	
	return 1;	
	}
	else 
	return 0;
}
Matrix& Matrix::operator ++()
{
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			matrix[x][y]+=1;
		}
	}
}
Matrix& Matrix::operator ++(int ignoreMe)
{
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			matrix[x][y]+=1;
		}
	}
}
Matrix& Matrix::operator --()
{
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			matrix[x][y]-=1;
		}
	}
}
Matrix& Matrix::operator --(int ignoreMe)
{
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			matrix[x][y]-=1;
		}
	}
}
Matrix Matrix::operator+(int r)
{
	Matrix temp(rows,columns);
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			temp.matrix[x][y]=matrix[x][y]+r;
		}
	}
	return temp;
}
Matrix Matrix::operator+(const Matrix &obj)
{
	Matrix temp(obj.rows,obj.columns);
	for (int x=0;x<temp.rows;x++)
	{
		for (int y=0;y<temp.columns;y++)
		{		
			temp.matrix[x][y]=matrix[x][y]+obj.matrix[x][y];
		}
	}
	return temp;
}
Matrix Matrix::operator-(int r)
{
	Matrix temp(rows,columns);
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			temp.matrix[x][y]=matrix[x][y]-r;
		}
	}
	return temp;
}
Matrix Matrix::operator-(const Matrix & obj)
{
	Matrix temp(obj.rows,obj.columns);
	for (int x=0;x<obj.rows;x++)
	{
		for (int y=0;y<obj.columns;y++)
		{		
			temp.matrix[x][y]=matrix[x][y]-obj.matrix[x][y];
		}
	}
	return temp;
}
Matrix Matrix::operator*(const Matrix &obj)
{
	Matrix temp(rows, obj.columns);
	for(int x=0; x<rows;++x)
        for(int y=0; y<obj.columns;++y)
            for(int z=0;z<columns;++z)
            {
                temp.matrix[x][y]+= matrix[x][z]*obj.matrix[z][y];
            }
	return temp;

}
Matrix Matrix::operator*(int r)
{
	Matrix temp(rows,columns);
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			temp.matrix[x][y]=matrix[x][y]*r;
		}
	}
	return temp;
}
Matrix Matrix::operator/(int r)
{
	Matrix temp(rows,columns);
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
		{		
			temp.matrix[x][y]=matrix[x][y]/r;
		}
	}
	return temp;
}
double Matrix::operator~() 
{
	if ((rows==2)&&(columns==2))
	return (matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0]);
	else 
	return -1;
}
Matrix::~Matrix()
{
}
Matrix::operator std::string()
{
	ostringstream str;
	string str1="0";
	str<<rows<<"X"<<columns<<endl;
	for (int x=0;x<rows;x++)
	{
		for (int y=0;y<columns;y++)
			{	if(y<columns-1)	
				{
					str<<matrix[x][y];
					str<<"-";
				}
				if((y==columns-1)&&(x<rows-1))
				{		
					str<<matrix[x][y];
					str<<"\n";
				}
				if((y==columns-1)&&(x==rows-1))
				{		
					str<<matrix[x][y];
				}
			}	
	}
	if (rows==0 && columns==0)
	return str1;
	else 
	return str.str();
}
ostream& operator<<(ostream& input, const Matrix& obj)
{
	for (int x=0;x<obj.rows;x++)
	{
		for (int y=0;y<obj.columns;y++)
		{		
			cout<<obj.matrix[x][y];
		}
	}
}
istream& operator>>(istream& ouput, Matrix& obj)
{
	for (int x=0;x<obj.rows;x++)
	{
		for (int y=0;y<obj.columns;y++)
		{		
			cin>>obj.matrix[x][y];
		}
	}
}




