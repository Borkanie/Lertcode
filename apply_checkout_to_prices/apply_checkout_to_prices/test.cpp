#include "pch.h"
#include "Solution.h"
TEST(DiscountPricesTests, PredefinedTest1) {
	std::string sentence = "there are $1 $2 and 5$ candies in the shop";
	int discount = 50;
	Solution sol;
	std::string result = sol.discountPrices(sentence, discount);
	std::string expected = "there are $0.50 $1.00 and 5$ candies in the shop";
	EXPECT_STRCASEEQ(result.c_str(), expected.c_str());
}

TEST(DiscountPricesTests, PredefinedTest2) {
	std::string sentence = "1 2 $3 4 $5 $6 7 8$ $9 $10$";
	int discount = 100;
	Solution sol;
	std::string result = sol.discountPrices(sentence, discount);
	std::string expected = "1 2 $0.00 4 $0.00 $0.00 7 8$ $0.00 $10$";
	EXPECT_STRCASEEQ(result.c_str(), expected.c_str());
}


