#include "gtest/gtest.h"
#include "Factorial.h"

TEST(Test,HandleMinusOne)
{
    Factorial fact(3);
    EXPECT_EQ(*(fact.Calculate()+3),6);   
}

int main()
{
   testing::InitGoogleTest(); 
   return RUN_ALL_TESTS();
}
