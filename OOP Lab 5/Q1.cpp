#include<cstdlib>
#include<iostream>
#include<cstring>
using namespace std;


//1 a

struct StudentCard{

	char campusCode;
	int batch;
	int ID;
};

//1 b
void StudentCardArrayInitialize(StudentCard arr[],int s){

int first=1000+rand()%1000;

for(int x=0;x<s;x++)
{	arr[x].campusCode='I';
	
	if(x<(s/2))	
	arr[x].batch=2016;
	else 
	arr[x].batch=2017;

	arr[x].ID=first++;
}
}

//1 c
void PrintStudentCard(StudentCard s){

	cout<<"("<<s.campusCode<<") "<<s.batch<<"-"<<s.ID<<endl;

}
//2 a

struct CustomTime
{
	int hours;
	int min;
	int seconds;
};
//2b 
long timeToSeconds(CustomTime t1) {
return t1.seconds+t1.min*60+t1.hours*3600;
}
//2c
CustomTime SecondsToTime(long t)
{
	CustomTime object;
	object.hours=t/3600;
	object.min=(t%3600)/60;
	object.seconds=t%60;
	return object;
}
//2d
CustomTime AddTimes(CustomTime t1, CustomTime t2)
{
	return SecondsToTime(timeToSeconds(t1)+timeToSeconds(t2));
}
//2e
CustomTime* MakeNewTime() {
	CustomTime* p= new CustomTime[1];
	return p;
}
//2f
void IntilaizeTime(CustomTime* & p, long totalSec) {
int a=SecondsToTime(totalSec);
p=MakeNewTime();
p=&a;
}
//2g
CustomTime* MakeArrayOfTimes(int s){
CustomTime* p= new CustomTime[s];
return p;
}
//2f
void IntilaizeTimeArray(CustomTime* &p, int hours[], int mins[], int sec[],int s) {
p=MakeArrayOfTimes(s);
for(int x=0;x<s;x++)
{	p[x].hours=hours[x];
	p[x].min=mins[x];
	p[x].seconds=sec[x];
}
}

//3a
struct Fraction{
int deNom;
int Nom;
};
//3b
void IntializeFraction(Fraction &f, int deNom, int Nom) {
if(deNom!=0)
f.deNom=deNom;
f.Nom=Nom;
}
//3c
Fraction AddFractions(Fraction f1, Fraction f2){
return ((f1.Nom*f2.deNom+f1.deNom*f2.Nom)/(f1.deNom*f2.deNom));}
//3d
Fraction MultiplyFractions(Fraction f1, Fraction f2){
return ((f1.Nom*f2.Nom)/(f1.deNom*f2.deNom));}
//3e
Fraction SubtractFractions(Fraction f1, Fraction f2){
return ((f1.Nom*f2.deNom-f1.deNom*f2.Nom)/(f1.deNom*f2.deNom));
}
//3f
Fraction DivideFractions(Fraction f1, Fraction f2){
return ((f1.Nom*f2.deNom)/(f1.deNom*f2.Nom));}
//4a
struct Student{
private:
int rollNo;
char* name;
string city;
string phone;
};
//4b
void Initialize() {
Student student1;
student1.rollNo=0;
student1.name=new char nam[25];
student1.city="";
student1.phone="";
}
//4c
void Destroy() {
delete [] nam;
}
//4d
bool setRollNo(int r){

}
int getRollNo(){

}
bool setName(char* n){

}
char* getName(){

}
bool setCity(string c){

}
string getCity(){

}
bool setPhone(string c){

}
string getPhone(){

}
void SetStudentArray(Student arr[], int size, char* names[], string cities[], string phones[]) {

}




int main()
{
StudentCard arr[6];

StudentCardArrayInitialize(arr,6);
PrintStudentCard(arr[0]);

}








