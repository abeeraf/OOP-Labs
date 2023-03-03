#include "TeamLeader.h"

/*TeamLeader::TeamLeader()
{

}*/
TeamLeader::TeamLeader(string nam, string add,int no, Date& date, int sht, double rate,int bon):ProductionWorker(no, date, nam, add,sht, rate)
{
	HoursRequired=0;
	HoursWorked=rate;
	bouns=bon; 

}
double TeamLeader::calculateSalary(Date dt)
{
	return dt.calDate()*8*getRate()+300;
}
//TeamLeader tl("Usman","This is address",123,dt,1,35.5,300);//name,addr,emp#,hiredate,shift,hourly,bonus
