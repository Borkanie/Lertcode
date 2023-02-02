#include "pch.h"
#include "Solution.h"

TEST(TestCaseName, Graph2) {
	TreeNode node9(2);
	TreeNode node8(2);
	TreeNode node7(3);
	TreeNode node6(3);
	TreeNode node5(1);
	TreeNode node4(1, &node6, &node7);
	TreeNode node3(14, &node9, &node8);
	TreeNode node2(7, &node4, &node5);
	TreeNode node1(21, &node2, &node3);

	Solution s;
	int result = s.findTilt(&node1);

	EXPECT_EQ(result, 9);
}



TEST(TestCaseName, TestName) {
	TreeNode node2(2);
	TreeNode node3(3);
	TreeNode node1(1, &node2, &node3);

	Solution s;
	int result = s.findTilt(&node1);

	EXPECT_EQ(result, 1);
}
