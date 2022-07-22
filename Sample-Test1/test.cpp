#include "pch.h"
#include <iostream>
#include"..\letka\Header.cpp"

TEST(TestChangeLetters, TestAllSmall) 
{
	char letter[] = "balaklava";
	EXPECT_EQ(Changer(letter), 1);

}

TEST(TestChangeLetters, TestFirstBig)
{
	char letter[] = "Balaklava";
	EXPECT_EQ(Changer(letter), 1);

}

TEST(TestChangeLetters, TestAllBig)
{
	char letter[] = "BALAKLAVA";
	EXPECT_EQ(Changer(letter), 1);

}

TEST(TestChangeLetters, TestZero)
{
	char letter[] = "";
	EXPECT_EQ(Changer(letter), 0);

}