#include<sstream>
#include<cstring>

using namespace std;

class Matrix
{
private:
int rows;
int columns;
int **matrix;

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

Matrix operator/(int x); //Divide Matrix by x

double operator~(); //Find determinant of Matrix

operator std::string(); //returns the string format of the Matrix
~Matrix();
friend ostream& operator<<(ostream& input, const Matrix&); //Outputs the Polynomial
friend istream& operator>>(istream& ouput, Matrix&); //Inputs the Polynomial

};


