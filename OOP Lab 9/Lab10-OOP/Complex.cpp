#include"Complex.h"

Complex::Complex()
{
	real=0;
	imaginary=0;
}
Complex::Complex(double r, double i)
{
	real=r;
	imaginary=i;
}
void Complex::setReal(double r)
{
	real=r;
}
double Complex::getReal()const
{
	return real;
}
void Complex::setImaginary(double i)
{
	imaginary=i;
}
double Complex::getImaginary() const
{
	return imaginary;
}
Complex Complex::operator+(const Complex &obj)
{
	Complex temp;
	temp.real=real+obj.getReal();
	temp.imaginary=imaginary+obj.getImaginary();
	return temp;
}
Complex Complex::operator-(const Complex &obj)
{
	Complex temp;
	temp.real=real-obj.getReal();
	temp.imaginary=imaginary-obj.getImaginary();
	return temp;
}
Complex Complex::operator*(const Complex &c1)
{
	Complex c2;
	c2.real=(real*c1.real-imaginary*c1.imaginary);
	c2.imaginary=(real*c1.imaginary+imaginary*c1.real);
	return c2;
}
void Complex::operator=(const Complex &obj)
{
	real=obj.getReal();
	imaginary=obj.getImaginary();
}
bool Complex::operator==(const Complex &obj)
{
	if ((real==obj.getReal())&&(imaginary==obj.getImaginary()))
	return 1;
	else 
	return 0;
}
bool Complex::operator!()const
{
	if ((real==0)&&(imaginary==0))
	return 1;
	else 
	return 0;
}
/*
main()
{
}

*/


