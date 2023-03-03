#include"Course.h"
#include<cstring>
using namespace std;

Course::Course()
{
	courseCode="NULL";
	courseTitle="NULL";
	creditHours=0;
	section='\0';
	repeatCount=0;
}
Course::Course(string cc, string ct, int ch,char s, int rc)
{
	courseCode=cc;
	courseTitle=ct;
	creditHours=ch;
	section=s;
	repeatCount=rc;
}
Course::Course(Course &copy)
{
	courseCode=copy.courseCode;
	courseTitle=copy.courseTitle;
	creditHours=copy.creditHours;
	section=copy.section;
	repeatCount=copy.repeatCount;
}
string Course::getcourseCode()
{
	return courseCode;
}
void Course::setcourseCode(string x)
{
	courseCode=x;
}
string Course::getcourseTitle()
{
	return courseTitle;
}
void Course::setcourseTitle(string t)
{
	courseTitle=t;
}
int Course::getcreditHours()
{
	return creditHours;
}
void Course::setcreditHours(int h)
{
	creditHours=h;
}
char Course::getsection()
{
	return section;
}
void Course::setsection(char s)
{
	section=s;
}
int Course::getrepeatCount()
{
	return repeatCount;
}
void Course::setrepeatCount(int c)
{
	repeatCount=c;
}
int GetCreditHoursCount(Semester sr)
{
	int total=0;
	for (int x=0; x<sr.size;x++)
	{
		total+=sr.courseCount[x];
	}
}
/*bool FindCourseInSemesterRegistration(SemesterRegistration sr,String Coursecode )
{
	
}*/
/////////////////////////SEMESTER///////////
Semester::Semester()
{
	semesterCode="NULL";
	courseCount=0;
	Course courses;
}
Semester::Semester(string sc,int c,Course* courseArr)
{
	semesterCode=sc;
	courseCount=c;
	courses=new Course[size];
	for (int x=0; x<size.size;x++)
	{
		courses[x].courseCode=courseArr[x].courseCode;
		courses[x].courseTitle=courseArr[x].courseTitle;
		courses[x].creditHours=courseArr[x].creditHours;
		courses[x].section=courseArr[x].section;
		courses[x].repeatCount=courseArr[x].repeatCount;
	}
}
Semester::Semester(Semester &s)
{
	semesterCode=s.semesterCode;
	courseCount=s.courseCount;
	courses=s.courses;
}
string Semester::getsemesterCode()
{
	return semesterCode;
}
void Semester::setsemesterCode(string x)
{
	semesterCode=x;
}
int Semester::getcourseCount()
{
	return getcourseCount();
}
void Semester::setcourseCount(int cc)
{
	courseCount=cc;
}
void Semester::setcourses(Course* p)
{
	courses=p;
}
Course Semester::getcourses()
{
	return courses;
}

int main()
{}



