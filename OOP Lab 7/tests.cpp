#include "Complex.cpp"
/*#include "Holiday.cpp"
#include "Date.cpp"
#include "Point.cpp"
#include "Line.cpp"
#include "Rectangle.cpp"*/
#include <gtest/gtest.h>

TEST(ComplexNumers, Constructors) { 
    Complex c1;
    ASSERT_EQ(0.0, c1.getReal());
    ASSERT_EQ(0.0, c1.getImaginary());
    
}
TEST(ComplexNumers, addComplex1) { 
    Complex c1(5.0,6.0);
    
    Complex c3 = c1.addComplex(3);
    
    ASSERT_EQ(8.0, c3.getReal());
    ASSERT_EQ(6.0, c3.getImaginary());
}
TEST(ComplexNumers, addComplex2) { 
    Complex c1(5.0,6.0);
    Complex c2(7.0,8.0);
    Complex c3 = c1.addComplex(c2);
    
    ASSERT_EQ(12.0, c3.getReal());
    ASSERT_EQ(14.0, c3.getImaginary());
}
TEST(ComplexNumers, subComplex1) { 
    Complex c1(5.0,6.0);
    
    Complex c3 = c1.subComplex(3);
    
    ASSERT_EQ(2.0, c3.getReal());
    ASSERT_EQ(6.0, c3.getImaginary());
}
TEST(ComplexNumers, subComplex2) { 
    Complex c1(5.0,6.0);
    Complex c2(7.0,8.0);
    Complex c3 = c1.subComplex(c2);
    
    ASSERT_EQ(-2.0, c3.getReal());
    ASSERT_EQ(-2.0, c3.getImaginary());
}
TEST(ComplexNumers, mulComplex1) { 
    Complex c1(5.0,6.0);
    
    Complex c3 = c1.mulComplex(3);
    
    ASSERT_EQ(15.0, c3.getReal());
    ASSERT_EQ(18.0, c3.getImaginary());
}
TEST(ComplexNumers, mulComplex2) { 
    Complex c1(5.0,6.0);
    Complex c2(7.0,8.0);
    Complex c3 = c1.mulComplex(c2);
    
    ASSERT_EQ(-13.0, c3.getReal());
    ASSERT_EQ(82.0, c3.getImaginary());
}
/*
TEST(Holiday, Constructors) { 
    Holiday a ("Day 1",1,"September");
     
    ASSERT_EQ(0, a.getName().compare("Day 1"));
    ASSERT_EQ(0, a.getMonth().compare("September"));
    ASSERT_EQ(1, a.getDay());
}
TEST(Holiday, inSameMonth) { 
    Holiday a ("Day 1",1,"Sep");
    Holiday b ("Day 2",2,"Feb");
    Holiday c ("Day 1",1,"Sep");
    
    
    ASSERT_EQ(0, inSameMonth(a,b));
    ASSERT_EQ(1, inSameMonth(a,c));
    
   
}
TEST(Holiday, avgDate) { 
    Holiday a ("Day 1",1,"September");
    Holiday b ("Day 2",2,"September");
    cout<<inSameMonth(a,b)<<endl;
    Holiday * ptr=new Holiday [2];
    *ptr=a;
    *(ptr+1)=b;
    
    
    ASSERT_EQ(1.5, avgDate(ptr, 2));
    
   
}

TEST(Date, Constructors) { 
        Date x(2000,11,6);
        ASSERT_EQ(6, x.getDay());
        ASSERT_EQ(11, x.getMonth());
        ASSERT_EQ(2000, x.getYear());
}

TEST(Date, toString) { 
        Date x(2000,11,6);
        
        ASSERT_EQ(0, x.toString().compare("2000/11/06"));
}

TEST(Date, isLeapYear) { 
        Date x(2000,11,6);
	Date x1(1999,12,6);
        
        ASSERT_EQ(1, x.isLeapYear());
        ASSERT_EQ(0, x1.isLeapYear());
}

TEST(Date, add1) { 
        Date x(2000,11,6);
	int days=20;
	x.add(days);
	ASSERT_EQ(0,x.toString().compare("2000/11/26"));
}

TEST(Date, add2) { 
        Date y1(2003,12,31);
        
        y1.add(1,29);
        //cout<<y1.toString()<<endl;
	ASSERT_EQ(0,y1.toString().compare("2004/02/29"));
}
TEST(Date, add3) { 
        Date z1(2003,12,25);
        Date z2(1,1,1);
        z1.add(z2);
	ASSERT_EQ(0,z1.toString().compare("2005/01/26"));
}

TEST(Date, Sub1) { 
        Date z(2005,1,21);
        z.subtract(41);
        
	ASSERT_EQ(0,z.toString().compare("2004/12/11"));
}

TEST(Date, Sub2) { 
        Date p1(2004,2,29);
        p1.subtract(1,0);
	ASSERT_EQ(0,p1.toString().compare("2004/01/31"));
}
TEST(Date, Sub3) { 
        
        Date z1(2005,1,26);
        Date z2(1,1,1);
        z1.subtract(z2);
	ASSERT_EQ(0,z1.toString().compare("2003/12/25"));
}
TEST(Date, addWeeks) { 
        Date x(2000,11,6);
	int days=20;
	x.add(days);
	int weeks=3;
	x.addWeeks(weeks);
	ASSERT_EQ(0,x.toString().compare("2000/12/17"));
}

TEST(Date, daysTo) { 
        Date x(2000,11,6);
	int days=20;
	x.add(days);
	int weeks=3;
	x.addWeeks(weeks);
	Date y(2000,11,6);
	y.daysTo(x);
	ASSERT_EQ(41,y.daysTo(x));
}

TEST(Point, TestForPointClass) { 
        Point p;
        ASSERT_EQ(0,p.getX());
        ASSERT_EQ(0,p.getY());
        Point p1(5,6);
        ASSERT_EQ(5,p1.getX());
        ASSERT_EQ(6,p1.getY());
        Point p2(p1);
        
        
        ASSERT_EQ(5,p2.getX());
        p2.setY(8);
        ASSERT_EQ(8,p2.getY());
}

TEST(Line, TestForLineClass) { 
        Point p1(5,6);
        Point p2(1,2);
        Line l(p1,p2);
        ASSERT_EQ(5,l.getP1().getX());
        ASSERT_EQ(2,l.getP2().getY());
        
}

TEST(Rectangle, Constructors) { 
        Rectangle x (1,2,3,4);
        ASSERT_EQ(0,x.toString().compare("Rectangle[x=1, y=2, width=3, height=4]"));
        
        
}
TEST(Rectangle, Union) { 
        Rectangle x (2,3,4,4);
	Rectangle y (3,3,5,4);
	Rectangle z=x.Union(y);
        ASSERT_EQ(0,z.toString().compare("Rectangle[x=2, y=3, width=6, height=4]"));
        
        
}*/
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
