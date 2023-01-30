#include "pch.h"
#include "Solution.h"


std::string Solution::discountPrices(std::string sentence, int discount) {
	double real_discount = (double)(100 - discount) / 100;
	// we go for speed
	std::string result = "";
	for (int i = 0; i < sentence.length(); i++) {
		
		std::string currentchar = "";
		bool money = sentence[i]=='$';
		for (int j = i; j < sentence.length(); j++) {
			// we found end of word or end of line.
			if (sentence[j] == ' ' || j == sentence.length() - 1) {
				money = money && (j >= i + 1);
				if (j == sentence.length() - 1) {
					money = money && (sentence[j] >= 48 && sentence[j] < 58);
				}
				else {
					money = money && (sentence[i] == '$' && j > i + 1);
				}
				currentchar = sentence.substr(i,j-i+1);
				i = j;
				break;
			} 
			// we are NOT stepping over a digit.
			if (i<j && (58 < sentence[j] || sentence[j] < 48)) {
				money = false;
				continue;
			}				
		}
		if (money) {
			// Create an output string stream
			std::ostringstream streamObj3;
			// Set Fixed -Point Notation
			streamObj3 << std::fixed;
			// Set precision to 2 digits
			streamObj3 << std::setprecision(2);
			streamObj3 << (double)((std::stod(currentchar.c_str() + 1)) * real_discount);
			result += "$" + streamObj3.str();
			if (i != sentence.length() - 1) {
				result += " ";
			}
		}
		else {
			result += currentchar;
		}
	}
	return result;
	
}