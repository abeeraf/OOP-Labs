
class Polynomial {

public:

Polynomial(); // a default constructor
Polynomial(double a,double b,double c); // parameterized constructor
Polynomial(const Polynomial &); // copy constructor
Polynomial& operator=(const Polynomial &); //assigns (copies) a Polynomial and Returns the same
bool operator==(const Polynomial &); //Compare and return true if equal
Polynomial operator+(const Polynomial &); //adds two Polynomial and returns the result
Polynomial operator-(const Polynomial &); //subtracts two Polynomial and returns the result
Polynomial operator*(double d); //Multiplies Polynomial with scaler value and returns the result
string operator string(); //returns the string format of the polynomial
double evaluate(double x); //evaluate the polynomial 
void roots(Complex &c1,Complex &c2);

~Polynomial();

};


ostream& operator<<(ostream& input, const Polynomial&); //Outputs the Polynomial
istream& operator>>(istream& ouput, Polynomial&); //Inputs the Polynomial


class Matrix
{
//the private data members

public:

Matrix(); // a default constructor

Matrix(int, int); // a parametrized constructor4

Matrix(const Matrix &); // copy constructor

Matrix& operator=(const Matrix &); //assigns (copies) a Matrix. Returns the same

bool operator==(const Matrix &); //Compares two matrices

Matrix& operator ++(); //pre-increment
Matrix& operator ++(int ignoreMe); //post-increment
Matrix& operator --(); //pre-decrement
Matrix& operator --(int ignoreMe); //post decrement

Matrix operator+(int x); //adds x to Matrix and returns the result

Matrix operator+(const Matrix &); //adds two Matrices and returns the result

Matrix operator-(int x); //subtracts x from Matrix and returns the result

Matrix operator-(const Matrix &); //subtracts two Matrices and returns the result

Matrix operator*(const Matrix &); //multiplies two Matrices

Matrix operator*(int x); //multiplies Matrix with  x

Matrix operator/(int x); Divide Matrix by x

double operator~(); Find determinant of Matrix

operator string(); //returns the string format of the Matrix
~Matrix();

};

ostream& operator<<(ostream& input, const Matrix&); //Outputs the Polynomial
istream& operator>>(istream& ouput, Matrix&); //Inputs the Polynomial
