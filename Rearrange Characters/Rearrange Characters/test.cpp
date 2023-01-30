#include "pch.h"
#include "Solution.h"
// LEETCODE SOURCE
// https://leetcode.com/problems/rearrange-characters-to-make-target-string/
TEST(RearrangeLettersTest, OneInstanceFound) {
	Solution solution;
	std::string s = "abcdef";
	std::string target = "abc";
	int result = solution.rearrangeCharacters(s, target);
	EXPECT_EQ(result, 1);
}

TEST(RearrangeLettersTest, TwoInstanceFound) {
	Solution solution;
	std::string s = "abcdefabcdef";
	std::string target = "abc";
	int result = solution.rearrangeCharacters(s, target);
	EXPECT_EQ(result, 2);
}

TEST(RearrangeLettersTest, NoInstanceFound) {
	Solution solution;
	std::string s = "qweghtyahj6";
	std::string target = "abc";
	int result = solution.rearrangeCharacters(s, target);
	EXPECT_EQ(result, 0);
}
TEST(RearrangeLettersTest, PredefinedTest1) {
	Solution solution;
	std::string s = "abbaccaddaeea";
	std::string target = "aaaaa";
	int result = solution.rearrangeCharacters(s, target);
	EXPECT_EQ(result, 1);
}
TEST(RearrangeLettersTest, PredefinedTest2) {
	Solution solution;
	std::string s = "ilovecodingonleetcode";
	std::string target = "code";
	int result = solution.rearrangeCharacters(s, target);
	EXPECT_EQ(result, 2);
}
