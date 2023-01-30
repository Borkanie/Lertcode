#pragma once

class Solution
{
public:
    /// <summary>
    /// You are given two 0-indexed strings s and target.   
    /// You can take some letters from sand rearrange them to form new strings.
    /// Return the maximum number of copies of target that can be formed by taking letters from sand rearranging them.
    /// </summary>
    /// <param name="s">The source parameter where we take the letters from.</param>
    /// <param name="target">The target string that we want to build.</param>
    /// <returns>Number of buildable 'target' in 's'.</returns>
    int rearrangeCharacters(std::string s, std::string target);
};

