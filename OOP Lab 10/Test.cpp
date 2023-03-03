//#include "Point.cpp"
#include "Line.cpp"
#include "Garage.cpp"
//#include "Car.cpp"
#include "Department.cpp"
#include "Professor.cpp"
#include "University.cpp"
#include <gtest/gtest.h>



//TASK 1///


TEST(Line, slope) { 
Line L2(3,2,1,6);
float slope=L2.findSlope();
ASSERT_FLOAT_EQ(-2, slope);
}

TEST(Line, length) { 
Point P1(6,6);
Point P2(2,3);
Line L3(P1,P2);
float length=L3.findLength();
ASSERT_EQ(5, length);
}
TEST(Line, midpoint1) { 
 Point P3;
Line L1;
P3=L1.findMidPoint();

int xcord=P3.getX_Coordinate();
int ycord=P3.getY_Coordinate();

ASSERT_EQ(3, xcord);
ASSERT_EQ(5, ycord);
}

TEST(Line, midpoint2) { 
 Point P3(0,0);
Line L1(3,2,1,6);
P3=L1.findMidPoint();

int xcord=P3.getX_Coordinate();
int ycord=P3.getY_Coordinate();

ASSERT_EQ(2, xcord);
ASSERT_EQ(4, ycord);


}



//TASK 2


TEST(Garage, IsFull) { 
Car c("suzuki","honda", "s123", 2001);
Car c1("suzuki","cultus", "s124", 2007);
Car c2("toyota","corolla", "t123", 2018);
Garage g("abc",0,5);
g.Push(c);
g.Push(c1);
g.Push(c2);
ASSERT_EQ(false, g.IsFull());
}


TEST(Garage, IsEmpty) { 
Car c("suzuki","honda", "s123", 2001);
Car c1("suzuki","cultus", "s124", 2007);
Car c2("toyota","corolla", "t123", 2018);
Garage g("abc",0,5);

ASSERT_EQ(true, g.IsEmpty());
}

TEST(Garage, Push) { 
Car c("suzuki","honda", "s123", 2001);
Garage g("abc",0,5);
bool actual=g.Push(c);
ASSERT_EQ(true, actual);
}

TEST(Garage, Find) { 
Car c("suzuki","honda", "s123", 2001);
Garage g("abc",0,5);
g.Push(c);
ASSERT_EQ(true, g.Find("s123"));
}

TEST(Garage, Remove) { 
Car c("suzuki","honda", "s123", 2001);
Car c1("suzuki","cultus", "s124", 2007);
Car c2("toyota","corolla", "t123", 2018);
Garage g("abc",0,5);
g.Push(c);
g.Push(c1);
g.Push(c2);
ASSERT_EQ(true, g.Remove("s124"));
ASSERT_EQ(false, g.Find("s124"));
}





//TASK 3

TEST(University, add) { 
University U("fast",5);
Department d("cs",5,1);
bool act=U.addDepartment(d);
ASSERT_EQ(true,act);
}

TEST(University, del) { 

University U("fast",5);
bool act=U.deleteDepartment("cs");
ASSERT_EQ(1,act);
}


TEST(University, update) { 

University U("fast",5);
bool act=U.updateDepartment(1,"ComputerScience");
ASSERT_EQ(true,act);
}



TEST(Department, add) { 

Department d("cs",1,5);
Professor p("Ali", 9532, "Assistant Professor");
bool act=d.addProfessor(p);
ASSERT_EQ(true,act);
}


TEST(Department,del) { 

Department d("cs",1,5);
Professor p("Ali", 9532, "Assistant Professor");
d.addProfessor(p);
bool act=d.deleteProfessor(9532);
ASSERT_EQ(true,act);
}


TEST(Department, update) { 
Department d("cs",1,5);
Professor p("Ali", 9532, "Assistant Professor");
d.addProfessor(p);
bool act=d.updateProfessor(9532,"Associate Professor");
ASSERT_EQ(true,act);
}



int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}






