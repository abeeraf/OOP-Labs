#include <cstring>
#include <sstream>
#include<iostream>
//#include "Complex.cpp"

using namespace std;
#ifndef Polynomial_h
#define Polynomial_h
class Polynomial {

public:

Polynomial(); 
Polynomial(double a,double b,double c); 
Polynomial(const Polynomial &); 
Polynomial& operator=(const Polynomial &); 
bool operator==(const Polynomial &); 
Polynomial operator+(const Polynomial &); 
Polynomial operator-(const Polynomial &); 
Polynomial operator*(double d);
operator string();
double evaluate(double x); 
void roots(Complex &c1,Complex &c2);
void seta(int d);
void setb(int d);
void setc(int d);
int geta();
int getb();
double getc();
~Polynomial();
friend ostream& operator<<(ostream& input, const Polynomial&); 
friend istream& operator>>(istream& ouput, Polynomial&);
private:
int a;
int b;
double c;

};

#endif
