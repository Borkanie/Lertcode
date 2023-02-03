#pragma once

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	bool Equal(const TreeNode node) {
		bool equal_left;
		bool equal_right;
		if (this->left == nullptr) {
			equal_left = (node.left ==nullptr);
		}
		else {
			equal_left = (this->left->Equal(*node.left));
		}
		
		if (this->right == nullptr) {
			equal_right = this->right == nullptr;
		}
		else {
			equal_right = (this->right->Equal(*node.right));
		}

		return (this->val == node.val) && equal_left && equal_right;
	}
};

/// <summary>
/// https://leetcode.com/problems/maximum-binary-tree/
/// https://leetcode.com/problems/maximum-binary-tree-ii/
/// </summary>
class Solution
{
public:
	/*  A maximum tree is a tree where every node has a value greater than any other value in its subtree.
		You are given the root of a maximum binary tree and an integer val.
		Just as in the previous problem, the given tree was constructed from a list a (root = Construct(a)) recursively with the following Construct(a) routine:
		If a is empty, return null.
		Otherwise, let a[i] be the largest element of a. Create a root node with the value a[i].
		The left child of root will be Construct([a[0], a[1], ..., a[i - 1]]).
		The right child of root will be Construct([a[i + 1], a[i + 2], ..., a[a.length - 1]]).
		Return root.
		Note that we were not given a directly, only a root node root = Construct(a).
		Suppose b is a copy of a with the value val appended to it. It is guaranteed that b has unique values.
		Return Construct(b).*/
	TreeNode* insertIntoMaxTree(TreeNode* root, int val);
	/*
	You are given an integer array nums with no duplicates. A maximum binary tree can be built recursively from nums using the following algorithm:
	Create a root node whose value is the maximum value in nums.
	Recursively build the left subtree on the subarray prefix to the left of the maximum value.
	Recursively build the right subtree on the subarray suffix to the right of the maximum value.
	Return the maximum binary tree built from nums.
	*/
	TreeNode* constructMaximumBinaryTree(std::vector<int>& nums);
};

