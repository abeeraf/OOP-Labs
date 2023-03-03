//Task 1

Complex(double = 0, double = 0);
Complex(const Complex & copy);
void setReal(double);
double getReal() const;
void setImaginary(double);
double getImaginary() const;
Complex addComplex( double r);
Complex addComplex(const Complex &c1);
Complex subComplex( double r);
Complex subComplex(const Complex &c1);
Complex mulComplex( double r);
Complex mulComplex(const Complex &c1);


//Task 2

Holiday();
Holiday(const string &n, int d, const string &m);
bool setName(const string &s);
string getName() const;
bool setDay(int u);
int getDay() const;
bool setMonth(const string &p);
string getMonth() const;
bool inSameMonth (const Holiday &a, const Holiday &b);//globle
double avgDate(Holiday arr[], int size);//globle function


//Task 3

Date(int year, int month, int day);
int getDay()const;
int getMonth()const;
int getYear()const;
bool isLeapYear()const;
string toString();
void add(const int &days);
void add(const int &months,const int &days);
void add(Date & date);
void subtract(const int &days);
void subtract(const int &months,const int &days);
void subtract(Date & date);
void addWeeks(const int &weeks);
int daysTo(const Date & other);

//Task 4

Point();
Point(int x1, int y1);
Point(const Point &copy);
int getX() const;
int getY() const;
void setX(int x1);
void setY(int y1);


//Task 5

Line(const Point &x, const Point &y);
Line(int x1, int y1, int x2, int y2);
Line(const Line &copy); 
Point getP1() const;
Point getP2() const;
string toString();
double getSlope();


//Task 6

Rectangle(int x, int y, int width, int height);
Rectangle(Point p, int width, int height);
Rectangle(const Rectangle &copy) ;
int getHeight()const;
int getWidth()const;
int getX()const;
int getY()const;
string toString();
bool contains(Point p);
Rectangle Union(Rectangle & rect);



//Task7
int GetCreditHoursCount(SemesterRegistration sr);
bool FindCourseInSemesterRegistration(SemesterRegistration sr,String Coursecode );


//FOr TASK 7 and 8  use the defined member functions in lab task pdf
