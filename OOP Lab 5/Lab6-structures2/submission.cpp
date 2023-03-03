#include<iostream>
using namespace std;
#include<cstdlib>

//Task1
struct StudentCard{

	char campusCode;
	int batch;
	int ID;
};

void StudentCardArrayIntialize(StudentCard arr[], int s){
srand(time(0));
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
void PrintStudentCard(StudentCard s) {
cout<<"("<<s.campusCode<<") "<<s.batch<<"-"<<s.ID<<endl;
}
//Task2
struct CustomTime
{
	int hours;
	int min;
	int seconds;
};
long timeToSeconds(CustomTime t1) {
return t1.seconds+t1.min*60+t1.hours*3600;
}
//2c
CustomTime SecondsToTime(long t) {
CustomTime object;
	object.hours=t/3600;
	object.min=(t%3600)/60;
	object.seconds=t%60;
	return object;
}
//2d
CustomTime AddTimes(CustomTime t1, CustomTime t2) { 
return SecondsToTime(timeToSeconds(t1)+timeToSeconds(t2));}
//2e
CustomTime* MakeNewTime() {
CustomTime* p= new CustomTime[1];
return p;
}
//2f
void IntilaizeTime(CustomTime* & p, long totalSec) {
int a=SecondsToTime(totalSec);
p=MakeNewTime();
p=&a;}
//2g
CustomTime* MakeArrayOfTimes(int s) {
 p= new CustomTime[s];
return p;
}
void IntilaizeTimeArray(CustomTime* &p, int hours[], int mins[], int sec[],int s) {
p=MakeArrayOfTimes(s);
for(int x=0;x<s;x++)
{	p[x].hours=hours[x];
	p[x].min=mins[x];
	p[x].seconds=sec[x];
}
}

//Task3
struct Fraction{
int deNom;
int Nom;
};
void IntializeFraction(Fraction &f, int deNom, int Nom) {
if(deNom!=0)
f.deNom=deNom;
f.Nom=Nom;
}
Fraction AddFractions(Fraction f1, Fraction f2){
Fraction f;
f.Nom=(f1.Nom*f2.deNom+f1.deNom*f2.Nom);
f.deNom=(f1.deNom*f2.deNom);
return f;
}
Fraction MultiplyFractions(Fraction f1, Fraction f2){
Fraction f;
f.Nom=(f1.Nom*f2.Nom);
f.deNom=(f1.deNom*f2.deNom);
return f;
}
Fraction SubtractFractions(Fraction f1, Fraction f2){
Fraction f;
f.Nom=(f1.Nom*f2.deNom-f1.deNom*f2.Nom);
f.deNom=(f1.deNom*f2.deNom);
return f;
}
Fraction DivideFractions(Fraction f1, Fraction f2){
Fraction f;
f.Nom=(f1.Nom*f2.deNom);
f.deNom=(f1.deNom*f2.Nom);
return f;}


//Task4
struct Student{
private:
int rollNo;
char* name;
string city;
string phone;
public:
void Initialize() {
	rollNo=0;
	name=new char[25];
	city="";
	phone="";
}

void Destroy() {delete [] name;}

bool setRollNo(int r){
if (r>1000)
{rollNo=r;
return 1;}
else 
return 0;

}
int getRollNo(){
return rollNo;
}
bool setName(char* n){
for(int x=0;((x<25)or(n[x]!='\0'));x++)
{name[x]=n[x];
if(x<4)
return 0;
else 
return 1;
}}
char* getName(){
return name;
}
bool setCity(string c){
city=c;
if(c[0]=='\0')
return 0;
else 
return 1;
}
string getCity(){
return city;
}
bool setPhone(string c){
phone=c;
if(c[0]=='\0')
return 0;
else 
return 1;
}
string getPhone(){
return phone;
}
};
void SetStudentArray(Student arr[], int size, char* names[], string cities[], string phones[]) {

for(int x=0;x<size;x++)
{
	arr[x].setRollNo(1001+x);
	arr[x].setName(names[x]);
	arr[x].setCity(cities[x]);
	arr[x].setPhone(phones[x]);
}}
void GetStudentArray(Student arr[], int size) {
for(int x=0;x<size;x++)
{
	cout<<arr[x].getRollNo()<<endl;
	cout<<arr[x].getName()<<endl;
	cout<<arr[x].getCity()<<endl;
	cout<<arr[x].getPhone()<<endl;

}

//Task5
struct Employee{
int empNo;
long basicPay;
long houseRent;
long medicalAllow;
long conveyanceAllow;
long netPay;

void setBasicPay(long bp){
basicPay=bp;
}
long getBasicPay(){
return basicPay;
}
void setEmpNo(int e){
empNo=e;
}
int getEmpNo(){
return empNo;
}
void calculateHouseRent(){
houseRent=0.54*basicPay;
}
void calculateMedicalAllowance(){
medicalAllow=0.15*basicPay;
}
void calculateConveyanceAllowance(){
conveyanceAllow=0.20*basicPay;
}
void calculateNetPay(){
netPay=0.11*basicPay;
}
long gethouseRent(){
return houseRent;
}
long getMedicalAllowance(){
return medicalAllow;
}
long getConveyanceAllowance(){
return conveyanceAllow;
}
long getNetPay(){
return netPay;
}
void Swap(Employee & emp1, Employee & emp2){
Employee temp;
	temp.basicPay=emp1.basicPay;
	emp1.basicPay=emp2.basicPay;
	emp2.basicPay=temp.basicPay;

	temp.houseRent=emp1.houseRent;
	emp1.houseRent=emp2.houseRent;
	emp2.houseRent=temp.houseRent;

	temp.medicalAllow=emp1.medicalAllow;
	emp1.medicalAllow=emp2.medicalAllow;
	emp2.medicalAllow=temp.medicalAllow;

	temp.conveyanceAllow=emp1.conveyanceAllow;
	emp1.conveyanceAllow=emp2.conveyanceAllow;
	emp2.conveyanceAllow=temp.conveyanceAllow;

	temp.netPay=emp1.netPay;
	emp1.netPay=emp2.netPay;
	emp2.netPay=temp.netPay;

}
};
//Task6
struct accountCateogry{
int Id;
string Name;
};

struct BankAccount{
public:
void Initilaize(string dp, string an, int accountTypeId, string accountTypeName, long balance){
depositorName=dp;
accountNumber=an;
accountCat.Id=accountTypeId;
accountCat.Name=accountTypeName;
Balance=balance;
}
bool depositAmount(long amountToDeposite){
if(amountToDeposite>=0)
{Balance+=amountToDeposite;}
}
bool withdrawAmount(long amountToWithdraw){
if(amountToWithdraw<Balance)
{return 0;}
else 
{return 1;
Balance-=amountToWithdraw;}
	
long getAmount(){return Balance;}

private:
string depositorName;
string accountNumber;
accountCategory accountCat;
long Balance; 
};


//Task7
//int GetCreditHoursCount(SemesterRegistration sr){//Write you code here}
//bool FindCourseInSemesterRegistration(SemesterRegistration sr,String Coursecode ){//Write you code here}


//FOr TASK 8 and 9 use the defined member functions in lab task pdf.

//Task 8
struct ShoppingItems{
public:
void InputItem(string item, int qty, int pr){
Name=item;
quantity=qty;
price=pr;
}
void Display(string item, int qty, int pr){
cout<<"Name:"<<item<<endl<<"Quantity:"<<qty<<endl<<"Price:"<<pr<<endl;
}

private:
string Name;
int quantity;
int price;
};

struct ShoppingList{
ShoppingItems Items[10];
int c=0;

void AddItem(string item, int qty, int pr){

if (c<=10){
Items[c].InputItem(item,qty, pr);
c++;}
}

void Print(int no){
Items[no].Display(string item, int qty, int pr);
}

void TotalCost{
int total=0;
for (int x=0;x==c;x++)
{total+=Items[x].quantity*Items[x].price;
cout<<"Total cost is "<<total;
}}

};

int main()
{}












