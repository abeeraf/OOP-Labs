#include "Polynomial.h"
#include <math.h>

Polynomial::Polynomial()
{
	a=0;
	b=0;
	c=0;
}
Polynomial::Polynomial(double a,double b,double c)
{
	this->a=a;
	this->b=b;
	this->c=c;
}
Polynomial::Polynomial(const Polynomial &copy)
{
	a=copy.a;
	b=copy.b;
	c=copy.c;
}
Polynomial& Polynomial::operator=(const Polynomial &obj)
{
	a=obj.a;
	b=obj.b;
	c=obj.c;
}
void Polynomial::seta(int d)
{
	a=d;
}
int Polynomial::geta()
{
	return a;
}
void Polynomial::setb(int d)
{
	b=d;
}
int Polynomial::getb()
{
	return b;
}
void Polynomial::setc(int d)
{
	c=d;
}
double Polynomial::getc()
{
	return c;
}
bool Polynomial::operator==(const Polynomial &obj)
{
	if(a==obj.a && b==obj.b && c==obj.c)
	return 1;
	else 
	return 0;
}
Polynomial Polynomial::operator+(const Polynomial &ob1)
{
	Polynomial ob3;
	ob3.a=ob1.a+a;
	ob3.b=ob1.b+b;
	ob3.c=ob1.c+c;
	return ob3;
}
Polynomial Polynomial::operator-(const Polynomial &ob1)
{
	Polynomial ob3;
	ob3.a=a-ob1.a;
	ob3.b=b-ob1.b;
	ob3.c=c-ob1.c;
	return ob3;
}
Polynomial Polynomial::operator*(double d)
{
	Polynomial ob;
	ob.a=a*d;
	ob.b=b*d;
	ob.c=c*d;
	return ob;
}
Polynomial::operator string()
{
	int d=c;
	string str;
	if(a!=0)
	str+=to_string(a)+"x^2";

	if((b!=0)&&(a!=0))
	str+=" + "+to_string(b)+"x";

	if ((b!=0)&&(a==0))
	str+=to_string(b)+"x";
	
	if ((c!=0)&&(b!=0))
	str+=" + "+to_string(d);

	if ((c!=0)&&(b==0)&&(a==0))
	str+=to_string(d);

	if ((c!=0)&&(b==0)&&(a!=0))
	str+=" + "+to_string(d);
	return str;
	
}
double Polynomial::evaluate(double x)
{
	return (a*x*x+b*x+c);
}
void Polynomial::roots(Complex &c1,Complex &c2)
{
	double a=b*b-4*a*c;	
	if(a>0)
	{
		c1.setReal(((-1*b+pow(a,1/2))/2*a));
		c2.setReal(((-1*b-pow(a,1/2))/2*a));
	}
	else 
	{
		c1.setReal((-1*b/2*a));
		c1.setImaginary(((pow(-1*a,1/2))/2*a));
		c2.setReal((-1*b/2*a));
		c2.setImaginary(((-1*pow(-1*a,1/2))/2*a));
	}
}
Polynomial::~Polynomial()
{

}
ostream& operator<<(ostream& input, const Polynomial& obj)
{
	cout<<string();
}
istream& operator>>(istream& ouput, Polynomial& pol)
{
	cout<<"Enter value of coefficient of X^2,X^1 and X^0 respectively: ";	
	cin>>pol.a;
	cin>>pol.b;
	cin>>pol.c;
}



