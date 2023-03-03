#include<iostream>
#include"Complex.h"
using namespace std;
int main ()
{
Complex a;
a.setReal(10);
cout<<a.getReal()<<endl;
a.setImaginary(10);
cout<<a.getImaginary()<<endl;
}

