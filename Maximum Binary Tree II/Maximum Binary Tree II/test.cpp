#include "pch.h"
#include "Solution.h"
TEST(TestCaseName, TestName) {
	Solution s;
	std::vector<int> input = { 3,2,1,6,0,5 };
	auto node=s.constructMaximumBinaryTree(input);
	TreeNode node0(0);
	TreeNode node5(5, &node0, nullptr);

	TreeNode node1(1);
	TreeNode node2(2, nullptr,  &node1);
	TreeNode node3(3, nullptr, &node2);
	TreeNode node6(6, &node3, &node5);
	bool result = (*node).Equal(node6);
	EXPECT_TRUE(result);
}