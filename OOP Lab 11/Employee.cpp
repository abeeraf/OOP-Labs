#include "Employee.h"

/*Employee::Employee()
{

}*/
Employee::Employee(int no, Date& date, string nam, string add):Person(nam,add)
{
	Empno=no;
	Hd=date;
}
