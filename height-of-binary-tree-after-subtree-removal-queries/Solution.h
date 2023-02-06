#ifndef SUM_OF_NUM_H
#define SUM_OF_NUM_H
#include <string>
#include <vector>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    public: 
        int maxVal=0;
        /// @brief You are given the root of a binary tree with n nodes. Each node is assigned a unique value from 1 to n. You are also given an array queries of size m.

        /// You have to perform m independent queries on the tree where in the ith query you do the following:

        ///    Remove the subtree rooted at the node with the value queries[i] from the tree. It is guaranteed that queries[i] will not be equal to the value of the root.

        /// Return an array answer of size m where answer[i] is the height of the tree after performing the ith query.
        std::vector<int> treeQueries(TreeNode* root, std::vector<int>& queries);
   
        int heightOfTree(TreeNode* root,int currentVal=0);     
};

#endif
