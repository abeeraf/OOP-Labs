#include"Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(double r, double i)
{
	real=r;
	imaginary=i;
}

Complex::Complex(const Complex & copy)
{
	real=copy.real;
	imaginary=copy.imaginary;
}

void Complex:: setReal(double r)
{
	real=r;
}

double Complex::getReal() const
{
	return real;
}

void  Complex::setImaginary(double i)
{
	imaginary=i;
}

double Complex:: getImaginary() const
{
	return imaginary;
}

Complex Complex::addComplex( double r)
{
	Complex c2;

	c2.real=real+r;
	c2.imaginary=imaginary;
	return c2;
}

Complex Complex::addComplex(const Complex &c1)
{
	Complex c2;
	c2=c1;

	c2.real+=real;
	c2.imaginary+=imaginary;
	return c2;
	
}

Complex Complex::subComplex( double r)
{
	Complex c2;

	c2.real=real-r;
	c2.imaginary=imaginary;
	return c2;
}

Complex Complex::subComplex(const Complex &c1)
{
	Complex c2;

	c2.real=real - c1.real;
	c2.imaginary = imaginary - c1.imaginary;
	return c2;
}

Complex Complex::mulComplex( double r)
{
	Complex c2;

	c2.real=real*r;
	c2.imaginary=imaginary*r;
	return c2;
}

Complex Complex::mulComplex(const Complex &c1)
{
	Complex c2;
	c2.real=(real*c1.real-imaginary*c1.imaginary);
	c2.imaginary=(real*c1.imaginary+imaginary*c1.real);
	return c2;
}


