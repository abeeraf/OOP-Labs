#include "Question1.cpp"
#include "Calculator.cpp"
#include "Vector.cpp"
#include <cmath>
#include <iostream>

#include <gtest/gtest.h>
using namespace std;
TEST(Question1, AllParts) { 
        int ix = 10;  int ix1 = 16;int ix2 = 0;
	double dx = 10.0;double dx1 = 16.0;double dx2 = 0.0;
	float fx = 10.0; float fx1 = 16.0;float fx2 = 0.0;
	float e = 2;
	double ee = 2;
     ASSERT_EQ(100, Power(ix, 2));
     ASSERT_EQ(100, Power(dx, ee));
     ASSERT_EQ(100, Power(fx, e));
     
     ASSERT_EQ(4, SquareRoot(ix1));
     ASSERT_EQ(4, SquareRoot(dx1));
     ASSERT_EQ(4, SquareRoot(fx1));
     
     ASSERT_EQ(1, cosine(ix2));
     ASSERT_EQ(1, cosine(dx2));
     ASSERT_EQ(1, cosine(fx2));
     
     ASSERT_EQ(0, sine(ix2));
     ASSERT_EQ(0, sine(dx2));
     ASSERT_EQ(0, sine(fx2));
     
     ASSERT_EQ(0, tangent(ix2));
     ASSERT_EQ(0, tangent(dx2));
     ASSERT_EQ(0, tangent(fx2));
}

TEST(Question2, float_int) { 
     Calculator<float> y;
     ASSERT_EQ(3,y.add(1.0, 2.0));
     ASSERT_EQ(-1,y.sub(1.0, 2.0));
     ASSERT_EQ(2,y.mul(1.0, 2.0));
     ASSERT_EQ(0.5,y.div(1.0, 2.0));
     
     
     Calculator<int> z;
     ASSERT_EQ(3,z.add(1, 2));
     ASSERT_EQ(3,z.add(1, 2));
     ASSERT_EQ(-1,z.sub(1, 2));
     ASSERT_EQ(2,z.mul(1, 2));
     ASSERT_EQ(0,z.div(1, 2));
}

TEST(Question3, Task1) { 
        Vector<int> x(5);
        
        ASSERT_EQ(0,x.size() );
        ASSERT_EQ(5,x.capacity() );
        
        Vector<int> v;
         ASSERT_EQ(-1,v.size() );
        ASSERT_EQ(0,v.capacity() );
        
     
}
TEST(Question3, Task2) 
{
        Vector<int> x(5);
        int val=2;
        x.push_back(val++);
        ASSERT_EQ(2,x[0] );
        x.push_back(val++);
        ASSERT_EQ(3,x[1] );
        x.push_back(val++);
        x.pop_back();
        ASSERT_EQ(2,x.front() );   
        ASSERT_EQ(3,x.back() );  
        ASSERT_EQ(false,x.empty());
        x.clear();
        ASSERT_EQ(true,x.empty());   
}

TEST(Question3, Task3) 
{
        Vector<int> x(3);
        Vector<int> v(4);
        
        x.push_back(1);        
        x.push_back(2);        
        x.push_back(3);
        v.push_back(4);        
        v.push_back(5);        
        v.push_back(6);
        v.push_back(7);
        x.swap(v);
        ASSERT_EQ(1,v[0] );
        ASSERT_EQ(3,v[2] );
        ASSERT_EQ(4,x[0] );
        ASSERT_EQ(7,x[3] );
        
}

TEST(Question3, Task4) 
{
        Vector<int> x(3);
        x.push_back(1);        
        x.push_back(2);        
        x.push_back(3);
        x.push_back(4);        
        x.push_back(5);        
        x.push_back(6);
        x.push_back(7);
        ASSERT_EQ(1,x[0] );
        ASSERT_EQ(4,x[3] );
        ASSERT_EQ(7,x[6] );
        x.shrink_to_fit(4);
        ASSERT_EQ(4,x.back());  
        
        
}

TEST(Question3, Task5) 
{
        Vector<int> x(3);
        x.push_back(1);        
        x.push_back(2);        
        x.push_back(3);
        x.push_back(4);   
        int * start=x.begin();
        int * end1=x.end();
        int val=1;
        for(int *i=start;i<=end1;++i)
        {
             ASSERT_EQ(val++,*i );
                
        }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
