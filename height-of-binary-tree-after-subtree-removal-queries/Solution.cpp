
#include "Solution.h"
#include <iostream>



int Solution::heightOfTree(TreeNode* root,int currentVal=0)
{
    if (root == nullptr)
    {
        return 0;
    }
    if(root->left == nullptr && root->right == nullptr)
    {
        return currentVal+1;
    }
    if(root->left == nullptr)
    {
        auto leftReturn  = heightOfTree(root->left,currentVal+1);
        if(leftReturn>maxVal){
            maxVal = leftReturn;
        }
        return leftReturn;
    }else{
    
        auto rightReturn  = heightOfTree(root->right,currentVal+1);
        if(rightReturn>maxVal){
            maxVal = rightReturn;
        }
        return rightReturn;
    }
}
TreeNode* Solution::applyQueryToTree(TreeNode* root,int query){
    if(root == nullptr){
        return nullptr;
    }
    if(root->val == query){
        return nullptr;
    }
    root->left = applyQueryToTree(root->left,query);
    root->right = applyQueryToTree(root->right,query);
    return root;
}
std::vector<int> Solution::treeQueries(TreeNode* root, std::vector<int>& queries)
{
    std::vector<int> returnVector;
    for(auto queri:queries){

        this->maxVal = 0;
        TreeNode* newRoot = applyQueryToTree(root,queri);
        auto height = heightOfTree(newRoot,0);
        returnVector.push_back(height);
    }
    return  queries;
}
