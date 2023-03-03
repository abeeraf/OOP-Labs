
#include "Date.cpp"
#include "Time.cpp"
#include "DateTime.cpp"
#include "Person.cpp"
#include "Employee.cpp"
#include "ProductionWorker.cpp"
#include "TeamLeader.cpp"
#include "Vertex.cpp"
#include "SegList.cpp"
#include "Triangle.cpp"
#include "Square.cpp"
#include <gtest/gtest.h>

//-------------------Lab Task 1----------------- 
TEST(Task1, First) {   						

	DateTime d1(29,11,1994, 5,35,30); //passing Date & Time data members in constructor 
	ASSERT_EQ("29/11/1994 5:35:30", d1.getDT());

}
//-------------------Lab Task 2-----------------

TEST(Task2, First){
	Date dt(2,8,2017);// date on which employee is hired
	Date dt2(10,9,2017);
	TeamLeader tl("Usman","This is address",123,dt,1,35.5,300); //name,addr,emp#,hiredate,shift,hourly,bonus
	ASSERT_EQ(3140, tl.calculateSalary(dt2)); // (number of hours worked in a  day * working days in a month * hourly rate )+ b0nus => ((8*10)*35.5)+300)
}
//-------------------Lab Task 3-----------------
TEST(Task3, First){
	Vertex v1(0,0);
	Vertex v2(10,0);
	Vertex v3(5,5);		
	Triangle t(v1,v2,v3);
	ASSERT_EQ("type=triangle,x=0,y=0,x=10,y=0,x=5,y=5",t.getSpec());
	

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
