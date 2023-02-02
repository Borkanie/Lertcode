#include "pch.h"
#include "Solution.h"


int Solution::findTilt(TreeNode* root) {
	if (root == nullptr) {
		return 0;
	}
	int tilt = 0;
	int leftSum = 0;
	int rightSum = 0;
	if (root->left != nullptr) {
		tilt += findTilt(root->left);
		leftSum = getValueOfSubGraf(root->left);
	}

	if (root->right != nullptr) {
		tilt += findTilt(root->right);
		rightSum = getValueOfSubGraf(root->right);
	}

	return tilt+abs(leftSum-rightSum);
}


int Solution::getValueOfSubGraf(TreeNode* root) {
	int leftSide = 0;
	int rightSide = 0;
	if (root->left != nullptr) {
		leftSide = getValueOfSubGraf(root->left);
	}
	if (root->right != nullptr) {
		rightSide = getValueOfSubGraf(root->right);
	}
	return root->val +leftSide + rightSide;
}