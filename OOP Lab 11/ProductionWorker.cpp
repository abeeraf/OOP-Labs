#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(int no, Date& date, string nam, string add,int sht, double rate):Employee( no, date, nam, add)
{
	Shift=sht;
	hpr=rate;
}

double ProductionWorker::getRate()
{
	return hpr;
}
