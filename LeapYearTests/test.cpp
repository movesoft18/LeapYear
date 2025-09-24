#include "pch.h"
#include "LeapYear.h"

TEST(LeapYearTest, Year2000True) {  
  EXPECT_TRUE(IsLeapYear(2000));
}

TEST(LeapYearTest, Year1900False) {
	EXPECT_FALSE(IsLeapYear(1900));
}

TEST(LeapYearTest, Year2016True) {
	EXPECT_TRUE(IsLeapYear(2016));
}

TEST(LeapYearTest, Year2022False) {
	EXPECT_FALSE(IsLeapYear(2022));
}

TEST(LeapYearTest, InvalidYearFalse) {
	EXPECT_FALSE(IsLeapYear(-400));
}