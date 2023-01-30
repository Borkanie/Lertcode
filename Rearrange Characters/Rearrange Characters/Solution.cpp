#include "pch.h"
#include "Solution.h"
#include<map>


    int Solution::rearrangeCharacters(std::string s, std::string target) {
        int maxLetter = 100;
        for (int i = 0; i < target.length(); ) { 
            int numberOfChars = 1;
            for (int j = 1; j < target.length(); j++) {
                if ((target.c_str() + j)[0] == (target.c_str() + i)[0]) {
                    target.erase(j, 1);
                    j--;
                    numberOfChars++;
                }
            }
            int letterFound=0;
            for (int j = 0; j < s.length(); j++) {
                if ((target.c_str() + i)[0]== (s.c_str() + j)[0]) {
                    letterFound++;
                }
            }
            letterFound = (int)(letterFound / numberOfChars);
            if (letterFound < maxLetter) {
                maxLetter = letterFound;
            }
            target.erase(0, 1);
        }
        return maxLetter;
    }

