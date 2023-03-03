
#include "submission.cpp"
#include <gtest/gtest.h>
 
TEST(SumTest, magicSum) 
{ 
    ASSERT_EQ(17, magicSum(5,2));
    ASSERT_EQ(84, magicSum(12,6));
    ASSERT_EQ(178, magicSum(18,7));
   
}
//-----------------------------------------------------

 
TEST(CountCannonballsTest, CountCannonballs) 
{ 
    ASSERT_EQ(0, CountCannonballs(0));
    ASSERT_EQ(14, CountCannonballs(3));
    ASSERT_EQ(30, CountCannonballs(4));
    ASSERT_EQ(1240, CountCannonballs(15));
   
}
//-----------------------------------------------------
TEST(gcdTest, calculateGcd) 
{ 
    ASSERT_EQ(5, calculateGcd(125,40));
    ASSERT_EQ(2, calculateGcd(18,70));
    ASSERT_EQ(24, calculateGcd(168,72));
   
}



TEST(parseToIntegerTest, parseToInteger) 
{ 
char s[]="125";
    ASSERT_EQ(125, parseToInteger(s,3));
   ASSERT_EQ(80, parseToInteger("80",2));
   ASSERT_EQ(151, parseToInteger("0151",4));
   
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
