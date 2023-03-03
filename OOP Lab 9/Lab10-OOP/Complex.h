class Complex
{
	public:
	Complex();
	Complex(double r,double i);
	void setReal(double r);
	double getReal()const;
	void setImaginary(double i);
	double getImaginary() const;
	Complex operator+(const Complex &obj);
	Complex operator-(const Complex &obj);
	Complex operator*(const Complex &obj);
	void operator=(const Complex &obj);
	bool operator==(const Complex &obj);
	bool operator!()const;
	private:
	double real;
	double imaginary;

};
