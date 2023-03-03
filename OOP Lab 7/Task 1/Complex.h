#include<iostream>
using namespace std;

class Complex{
	private: 
	double real;
	double imaginary;
	public:
	Complex(double = 0, double = 0);
	Complex(const Complex & copy);
	void setReal(double );
	double getReal() const;
	void setImaginary(double );
	double getImaginary() const;
	Complex addComplex( double r);
	Complex addComplex(const Complex &c1);
	Complex subComplex( double r);
	Complex subComplex(const Complex &c1);
	Complex mulComplex( double r);
	Complex mulComplex(const Complex &c1);

};
