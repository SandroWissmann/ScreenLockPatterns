#ifndef TST_PATTERNSTEST_H
#define TST_PATTERNSTEST_H

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include "../ScreenLockPatterns/patterns.h"

using namespace testing;

TEST(Patterns, noLength)
{
    EXPECT_EQ(countPatternsFrom('A', 0), 0);
}

TEST(Patterns, length1)
{
    constexpr auto length = 1;
    constexpr auto expectedResult = 1;

    EXPECT_EQ(countPatternsFrom('A', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('B', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('C', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('D', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('E', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('F', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('G', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('H', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('I', length), expectedResult);
}

TEST(Patterns, length2)
{
    constexpr auto length = 2;
    constexpr auto expectedResult = 5;

    EXPECT_EQ(countPatternsFrom('A', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('B', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('C', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('D', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('E', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('F', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('G', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('H', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('I', length), expectedResult);
}

TEST(Patterns, length3)
{
    constexpr auto length = 3;
    constexpr auto expectedResult = 37;

    EXPECT_EQ(countPatternsFrom('A', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('B', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('C', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('D', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('E', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('F', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('G', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('H', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('I', length), expectedResult);
}

TEST(Patterns, length4)
{
    constexpr auto length = 4;
    constexpr auto expectedResult = 256;

    EXPECT_EQ(countPatternsFrom('A', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('B', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('C', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('D', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('E', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('F', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('G', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('H', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('I', length), expectedResult);
}

TEST(Patterns, length8)
{
    constexpr auto length = 8;
    constexpr auto expectedResult = 23280;

    EXPECT_EQ(countPatternsFrom('A', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('B', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('C', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('D', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('E', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('F', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('G', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('H', length), expectedResult);
    EXPECT_EQ(countPatternsFrom('I', length), expectedResult);
}

TEST(Patterns, toLong)
{
    EXPECT_EQ(countPatternsFrom('A', 0), 0);
}

#endif // TST_PATTERNSTEST_H
