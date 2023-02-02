#pragma once

//Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
/// <summary>
/// https://leetcode.com/problems/binary-tree-tilt/
/// </summary>
class Solution {
public:
	/// <summary>
	/// Given the root of a binary tree, return the sum of every tree node's tilt.
	///	The tilt of a tree node is the absolute difference between the sum of all 
	/// left subtree node valuesand all right subtree node values.If a node does 
	/// not have a left child, then the sum of the left subtree node values is treated as 0.
	///	The rule is similar if the node does not have a right child.
	/// </summary>
	/// <param name="root"></param>
	/// <returns></returns>
	int findTilt(TreeNode* root);

	int getValueOfSubGraf(TreeNode* root);

};

