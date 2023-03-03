#ifndef ProductionWorker_h
#define ProductionWorker_h
#include"Employee.h"

class ProductionWorker: public Employee{
int Shift;
double hpr;

public:
ProductionWorker();
ProductionWorker(int no, Date& date, string nam, string add,int sht, double rate);
double getRate();
};
#endif
