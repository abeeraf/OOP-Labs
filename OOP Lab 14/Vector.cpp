#include <vector>
#include<iostream>
using namespace std;
template<typename T>
class Vector {
private:
	T* ptr;
	int size1;
	int c_index;
public:
	Vector()
	{
		ptr=new T[0];
		c_index=-1;
		size1=0;
	}
	Vector(int size)
	{
		ptr=new T[size];
		c_index=0;
		size1=size;
	}
	Vector(int size, const T& iv)
	{
		size1=size;
		c_index=-1;
		ptr=new T[size];
		ptr[++c_index]=iv;
		
	}
	Vector(const Vector<T>& obj)
	{
		size1=obj.size1;
		ptr=new T[size1];
		c_index=-1;
		  for (int i=0 ; i<size1 ; i++)
		{
		    c_index++;
		    ptr[c_index]=obj.ptr[c_index];
		}
	}
	~Vector()
	{
		delete ptr;
	}
	const T& operator=(const T& obj)
	{
		size1=obj.size1;
		ptr=new T[size1];
		c_index=-1;
		  for (int i=0 ; i<size1 ; i++)
		{
		    c_index++;
		    ptr[c_index]=obj.ptr[c_index];
		}
	
	}
	T* begin()
	{
		return ptr;
	}
	T* end()
	{
		return ptr+c_index+1;
	}
	int size()
	{
		return c_index;
	}
	void resize(int x)
	{
		size1=x;
	}
	bool empty()
	{
		if(c_index==-1)
		return 1;
		else 
		return 0;
	}
	void shrink_to_fit(int x)
	{
		c_index=x;
	}
	T& operator[](int index)
	{
		return ptr[index];
	}
	T& front()
	{
		return *ptr;
	}
	T& back()
	{
		return *(ptr+c_index-1);
	}
	void push_back(const T& value)
	{	
		ptr[c_index]=value;
		c_index+=1;
	}
	void pop_back()
	{
		ptr[c_index]=0;
		c_index-=1;
	}
	void swap(Vector<T>& other)
	{

		for(int i=0; i<other.size1; i++) 
	    { 
		T temp;
		temp=other[i];
		other[i]=ptr[i];
		ptr[i]=temp;
		c_index++;
	    } 
	}
	void clear()
	{
		ptr=NULL;
		c_index=-1;
	}
	int capacity()
	{
		return size1;
	}
};
