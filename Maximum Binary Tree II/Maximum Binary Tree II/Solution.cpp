#include "pch.h"
#include "Solution.h"



TreeNode* Solution::insertIntoMaxTree(TreeNode* root, int val) {
	if (!root)return new TreeNode(val);
	else if (root->val < val) {
		TreeNode* head = new TreeNode(val);
		head->left = root;
		return head;
	}
	else {
		root->right = insertIntoMaxTree(root->right, val);
		return root;
	}

}

TreeNode* Solution::constructMaximumBinaryTree(std::vector<int>& nums) {
	if (nums.size() == 0) {
		return nullptr;
	}
	if (nums.size() == 1) {
		return new TreeNode(nums[0]);
	}
	auto max_iterator = std::max_element(nums.begin(), nums.end());
	TreeNode* current = new TreeNode(*max_iterator);
	if (max_iterator - nums.begin() > 0) {
		current->left = constructMaximumBinaryTree(std::vector<int>(nums.begin(), max_iterator));
	}

	if (nums.end() - (max_iterator + 1) > 0) {
		current->right = constructMaximumBinaryTree(std::vector<int>(max_iterator + 1, nums.end()));
	}
	return current;
}