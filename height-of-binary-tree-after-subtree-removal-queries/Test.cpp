#include <gtest/gtest.h>
#include "Solution.h"
#include <cmath>

TreeNode* constructBinaryTree(std::vector<int>& nums) {
    int level = 0;
    TreeNode* root = new TreeNode(nums[0]);
    std::vector<TreeNode*> currentNodes;
    currentNodes.push_back(root);
    int j = 0;
    for(int i=1;i<nums.size();i++){
        if(nums[i] == NULL){
            continue;
        }
        if(std::log2(i)==level){
            j=0;
            level++;
            int maxindex = currentNodes.size();
            for(auto node:currentNodes){
                currentNodes.push_back(node->left);
                currentNodes.push_back(node->right);
            }
            currentNodes.erase(currentNodes.begin(),currentNodes.begin()+maxindex);
        }
        if(i%2 == 0){
            currentNodes[j]->left = new TreeNode(nums[i]);
        }else{
            currentNodes[j++]->right = new TreeNode(nums[i]);
        }
    }
}

TEST(Sum_of_num, Test1)
{
    Solution s;
    std::vector<int> root = {1,3,4,2,NULL,6,5,NULL,NULL,NULL,NULL,NULL,7};

    std::vector<int> queries = {4};
    std::vector<int> expected = {2};
    std::vector<int> actual = s.treeQueries(root,queries);
    EXPECT_EQ(expected, actual);
}

TEST(Sum_of_num, Test2)
{
    Solution s;
    int input = 63;
    bool expected = false;
    bool actual = s.sumOfNumberAndReverse(input);
    EXPECT_EQ(expected, actual);
}

TEST(Sum_of_num, Test3)
{
    Solution s;
    int input = 0;
    bool expected = true;
    bool actual = s.sumOfNumberAndReverse(input);
    EXPECT_EQ(expected, actual);
}