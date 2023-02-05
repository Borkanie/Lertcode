#ifndef _SOLUTION_H
#define _SOLUTION_H
#include <string>
class Solution
{
    public: 
        /// @brief You are given a binary string s. In one second, all occurrences of "01" are simultaneously replaced with "10". This process repeats until no occurrences of "01" exist.
        /// Return the number of seconds needed to complete this process.
        /// @param s 
        /// @return 
        int secondsToRemoveOccurrences(std::string s);
};

#endif
