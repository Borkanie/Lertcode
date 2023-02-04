#include "pch.h"
#include "Solution.h"
/*
TEST(InsertionTest, Test1) {
	Solution s;
	std::vector<int> input = { 2,1,5,3 };
	auto node = s.constructMaximumBinaryTree(input);
	node = s.insertIntoMaxTree(node, 4);
	EXPECT_TRUE(node->right->right->val == 3);
}*/

TEST(InsertionTest, Test2) {
	Solution s;
	std::vector<int> input = { 4,1,3,2 };
	auto node = s.constructMaximumBinaryTree(input);
	node = s.insertIntoMaxTree(node, 5);
	EXPECT_TRUE(node->val==5);
}


TEST(ConstructionTest, Test1) {
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
