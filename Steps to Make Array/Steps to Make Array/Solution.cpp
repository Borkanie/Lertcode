#include "pch.h"
#include "Solution.h"
#include <stack>
using namespace std;

int Solution::totalSteps(std::vector<int>& nums) {
    int n = nums.size();
    vector<int>index_vector(n);
    stack<int>stack;
    int result = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!stack.empty() && nums[i] > nums[stack.top()])
        {
            index_vector[i] = max(index_vector[i] + 1, index_vector[stack.top()]);
            stack.pop();
        }
        stack.push(i);
        result = max(result, index_vector[i]);
    }
    return result;
}
