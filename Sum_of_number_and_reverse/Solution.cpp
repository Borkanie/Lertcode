
#include "Solution.h"
#include <iostream>

int Solution::reverse(int num){
    int rev = 0;
    while(num > 0){
        rev = rev*10 + num%10;
        num = num/10;
    }
    return rev;
}
bool Solution::sumOfNumberAndReverse(int num) 
{
    if(num == 0){
        return true;
    }
    for(int i=0;i<num;i++){
        int sum = i + reverse(i);
        if(sum == num){
            return true;
        }
    }
    return false;
}
