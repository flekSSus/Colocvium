#include "gtest/gtest.h"
#include "Factorial.h"

TEST(Test,Correct)
{
    Factorial fact(10);
    auto arr= fact.Calculate();
        
    EXPECT_EQ(arr[0],1);   
    EXPECT_EQ(arr[5],120);   
    EXPECT_EQ(arr[10],3'628'800);   
}

int main()
{
   testing::InitGoogleTest(); 
   return RUN_ALL_TESTS();
}
