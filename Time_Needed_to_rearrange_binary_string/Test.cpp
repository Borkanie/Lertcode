#include <gtest/gtest.h>
#include "Solution.h"

TEST(SecondToRemoveOccurrences, Test1)
{
    Solution s;
    std::string input = "0110101";
    int expected = 4;
    int actual = s.secondsToRemoveOccurrences(input);
    EXPECT_EQ(expected, actual);
}

TEST(SecondToRemoveOccurrences, Test2)
{
    Solution s;
    std::string input = "11100";
    int expected = 0;
    int actual = s.secondsToRemoveOccurrences(input);
    EXPECT_EQ(expected, actual);
}