#include<cstring>
#include<iostream>
using namespace std;
class Course
{
	private:
	string courseCode;
	string courseTitle;
	int creditHours;
	char section;
	int repeatCount;

	public:
	Course();
	Course(string cc, string ct, int ch,char s, int rc);
	Course(Course &s);
	string getcourseCode();
	void setcourseCode(string x);
	string getcourseTitle();
	void setcourseTitle(string t);
	int getcreditHours();
	void setcreditHours(int h);
	char getsection();
	void setsection(char s);
	int getrepeatCount();
	void setrepeatCount(int c);
};

class Semester
{
	private:
	string semesterCode;
	int courseCount;
	Course courses;
	
	public:
	Semester();
	Semester(string sc,int c,Course* courseArr);
	Semester(Semester &s);
	int size;
	string getsemesterCode();
	void setsemesterCode(string x);
	int getcourseCount();
	void setcourseCount(int cc);
	void setcourses(Course* p);
	Course getcourses();

};



