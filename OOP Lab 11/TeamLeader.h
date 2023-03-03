#ifndef TeamLeader_h
#define TeamLeaderr_h
#include"ProductionWorker.h"

class TeamLeader: public ProductionWorker{

int HoursRequired;
int HoursWorked;
int bouns; 

public:
//TeamLeader();
TeamLeader(string nam, string add,int no, Date& date, int sht, double rate,int bon);
double calculateSalary(Date dt);
};
#endif
