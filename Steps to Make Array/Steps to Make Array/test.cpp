#include "pch.h"
#include "Solution.h"

using namespace std;
TEST(TestCaseName, TestName) {
	vector<int> input{ 10,6,5,10,15 };
	Solution sol;
	int result = sol.totalSteps(input);
	EXPECT_EQ(1, result);
}