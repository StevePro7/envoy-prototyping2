#include "src/lib/cpplib.h"
#include "gtest/gtest.h"
#include <vector>

TEST(CPPLibTest, FindMaxHandlesSizeOne) {
CPPLib cpplib;
std::vector<int> inputs = {2};
EXPECT_EQ(2, cpplib.FindMax(inputs));
}

TEST(CPPLibTest, FindMaxHandlesConsecutiveNumbers) {
CPPLib cpplib;
std::vector<int> inputs = {1, 2, 3, 4};
EXPECT_EQ(cpplib.FindMax(inputs), 4);
}

TEST(CPPListTest, FindMaxHandlesEmptyVector) {
CPPLib cppLib;
std::vector<int> inputs = {};
EXPECT_EQ(-1, cppLib.FindMax(inputs));
}