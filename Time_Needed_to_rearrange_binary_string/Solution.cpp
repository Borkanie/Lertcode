#include "Solution.h"
#include <iostream>

int Solution::secondsToRemoveOccurrences(std::string s)
{
    int count = 0;
    bool notFound=false;
    while(notFound==false){
        notFound = true;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0' && s[i+1]=='1'){
                s[i]='1';
                s[i+1]='0';
                i++;
                notFound = false;
            }
        }       
        if(notFound==false)
            count++;
    }
    return count;
}