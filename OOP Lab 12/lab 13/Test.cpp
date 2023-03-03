#include "Shape.cpp"
#include "Rectangle.cpp"
#include "Triangle.cpp"
#include "Circle.cpp"
#include "Carbonated.cpp"
#include "Drink.cpp"
#include "Water.cpp"

#include "Person.cpp"
#include "Employee.cpp"
#include "Faculty.cpp"
#include <gtest/gtest.h>

//----------------------------------------------------------------------------
//------------------------Task 1--------------------------------------
//----------------------------------------------------------------------------
//
////-------------------TEST 1---------------- (Marks=1)

TEST(Class_Circle, area) 
{   			
	Shape* shape=new Circle("Circle", 9);
	EXPECT_FLOAT_EQ(254.34,shape->area()); 
}

//-------------------TEST 2---------------- (Marks=1)
TEST(Class_Triangle, area) 
{   			
	Shape* shape=new Triangle("Triangle", 5, 9);
	EXPECT_FLOAT_EQ(22.5,shape->area());
}

//-------------------TEST 3---------------- (Marks=1)
TEST(Class_Rectangle, area) 
{   			
	Shape* shape=new Rectangle("Rectangle",4, 8);
	EXPECT_FLOAT_EQ(32,shape->area());
}



//----------------------------------------------------------------------------
//------------------------Task 2--------------------------------------
//----------------------------------------------------------------------------

//------------------- TEST 1---------------- (Marks=1)

TEST(Class_Faculty, calcSal) 
{   		
  
	Employee* e=new Faculty("Leo", "Street 7", 6576, 80000, 5000, 300, "Professor", "CS");//name, address, Emp_no,gross_pay,house_rent, medical_allow,designation,department
	EXPECT_EQ(48000,e->calcSalary());

}




//----------------------------------------------------------------------------
//------------------------Task 3--------------------------------------
//----------------------------------------------------------------------------

//-------------------TEST 1---------------- (Marks=1)
TEST(Class_Carbonated, getExpDate) 
{   		
	Carbonated sample("Diet Drink","Nestle","Sugar-free",15,50,2020);
	ASSERT_EQ(2020,sample.getExpDate());
}


//-------------------TEST 2---------------- (Marks=1)
TEST(Class_Carbonated, getFlavor) 
{   		
	Carbonated sample("Diet Drink","Nestle","Sugar-free",15,50,2020);
	EXPECT_EQ("Sugar-free",sample.getFlavor());
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
