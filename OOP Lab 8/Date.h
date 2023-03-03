#include <sstream>
#include <string>
using namespace std;
class Date
{
	public:
	Date(int year, int month, int day);
	void operator=(const Date &obj);
	void operator+(int d);
	void operator-(int d);
	void operator+(const Date &obj);
	void operator-(const Date &obj);
	bool operator>(const Date &obj);
	bool operator>=(const Date &obj);
	bool operator<(const Date &obj);
	bool operator<=(const Date &obj);
	bool operator!=(const Date &obj);
	bool operator==(const Date &obj);
	int getDay();
	int getMonth();
	int getYear();
	bool isLeapYear();
	string toString();
	private:
	int year;
	int month;
	int day;
};
