#include <gtest/gtest.h>
#include "Solution.h"

TEST(Sum_of_num, Test1)
{
    Solution s;
    int input = 443;
    bool expected = true;
    bool actual = s.sumOfNumberAndReverse(input);
    EXPECT_EQ(expected, actual);
}

TEST(Sum_of_num, Test2)
{
    Solution s;
    int input = 63;
    bool expected = false;
    bool actual = s.sumOfNumberAndReverse(input);
    EXPECT_EQ(expected, actual);
}

TEST(Sum_of_num, Test3)
{
    Solution s;
    int input = 0;
    bool expected = true;
    bool actual = s.sumOfNumberAndReverse(input);
    EXPECT_EQ(expected, actual);
}