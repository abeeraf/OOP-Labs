
#include "submission.cpp"
#include <gtest/gtest.h>

//-------------------Lab Task 1----------------- (1)
TEST(Task1, First) {   						

	float a1=5.01, b1=12.0, c1=14.0, d1,r1=31.01;
	float* pa1=&a1, *pb1=&b1, *pc1=&c1, *pd1=&d1;
	sumFloats(pa1,pb1,pc1,pd1);
	ASSERT_EQ(r1, d1);

	float a2=5.0, b2=9.5, c2=14.0, d2, r2=28.5;
	float* pa2=&a2, *pb2=&b2, *pc2=&c2, *pd2=&d2;
	sumFloats(pa2,pb2,pc2,pd2);
	ASSERT_EQ(r2, d2);

	float a3=-5.5, b3=12.0, c3=14.0, d3,r3=20.5;
	float* pa3=&a3, *pb3=&b3, *pc3=&c3, *pd3=&d3;
	sumFloats(pa3,pb3,pc3,pd3);
	ASSERT_EQ(r3, d3);

}
//-------------------Lab Task 2----------------- (1+1)
TEST(Task2, First){
	int a1[]={1,2,3,4,5};
	sortArray1(a1,5);
	ASSERT_EQ(1, a1[0]);
	ASSERT_EQ(3, a1[1]);
	ASSERT_EQ(4, a1[4]);

}

TEST(Task2, Second){
	int a2[]={1,2,3,4,5,6,8,10};
	sortArray1(a2,8);
	ASSERT_EQ(1, a2[0]);
	ASSERT_EQ(5, a2[2]);
	ASSERT_EQ(10, a2[7]);

}

//-------------------Lab Task 3----------------- (1+1+1)

TEST(Task3, First){
	int a1[]={2,1,6,4,8};
	sortArray2(a1,5);
	ASSERT_EQ(1, a1[0]);
	ASSERT_EQ(2, a1[1]);
	ASSERT_EQ(8, a1[4]);
}
TEST(Task3, Second){
	int a1[]={1,7,15,9,5,11,13,3};
	sortArray2(a1,8);
	ASSERT_EQ(1, a1[0]);
	ASSERT_EQ(15, a1[7]);
	ASSERT_EQ(5, a1[2]);
}
TEST(Task3, Third){
	int a1[]={14,4,6,8,10,12,2};
	sortArray2(a1,7);
	ASSERT_EQ(2, a1[0]);
	ASSERT_EQ(14, a1[6]);
}

//-------------------Lab Task 4,5----------------- (1+1)

TEST(Task4, First){
	int a1[]={0,1,2,3,4,5,6};
	reverseArray1(a1,7);
	int i;
	for(i=0;i<=6;i++)
	   
		ASSERT_EQ(6-i, a1[i]);
		
}

TEST(Task4, Second){
	int a1[12];
	int i;
	for(i=0;i<12;i++)
	a1[i]=12-i;
	reverseArray2(a1,12);
	
	for(i=0;i<=11;i++)
	   ASSERT_EQ((1+i), a1[i]);
}


//-------------------Lab Task 6----------------- (1)

TEST(Task6, First){
	int a1=8;
	int *p1=&a1;	
	   ASSERT_FLOAT_EQ(2.0f, cubeRoot(p1));

	int a2=64;
	int *p2=&a2;
	ASSERT_FLOAT_EQ(4.0f, cubeRoot(p2));
}

//-------------------Lab Task 7----------------- (1)

TEST(Task7, First){
	double a1[]={8.0, 5.0, 12.0, 14.0, 9.0};
	double r1[5];
	int i;	
	for(i=0;i<5;i++)
	r1[i]=a1[i]*2;
	mutliplyBy2(a1,5);
	
	for(i=0;i<5;i++)	
	   EXPECT_DOUBLE_EQ(r1[i], a1[i]);

}

//-------------------Lab Task 8----------------- (1)

TEST(Task8, First){
	char* t="This is a test String";	
	   ASSERT_EQ(22, lengthOfString(t) );

}

//-------------------Lab Task 9----------------- (2)

TEST(Task9, First){
	int *p1, *p2;
	allocateMemory(p1,p2);
	int i;
	for(i=1;i<5;i++)	
	   ASSERT_EQ(i, *(p1+i-1));
	for(i=1;i<5;i++)	
	   ASSERT_EQ(i+4, *(p2+i-1));

}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
