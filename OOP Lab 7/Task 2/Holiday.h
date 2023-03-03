#include<cstring>
#include<iostream>
using namespace std;
class Holiday
{
private:
string name;
int day;
string month;
public:
Holiday();
Holiday(const string &n, int d, const string &m);
bool setName(const string &s);
string getName() const;
bool setDay(int u);
int getDay() const;
bool setMonth(const string &p);
string getMonth() const;

};


