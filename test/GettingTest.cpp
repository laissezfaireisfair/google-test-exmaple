#include "gtest/gtest.h"
#include "Wrapper.h"

TEST(GettingTest, Test1) {
  ns::Wrapper wrapper(3);
  EXPECT_EQ(wrapper.Get(), 3);
}

TEST(GettingTest, Test2) {
  for (int i = 0; i < 1000; ++i) {
    ns::Wrapper wrapper(i);
    EXPECT_EQ(wrapper.Get(), i);
  }
}

TEST(GettingTest, Test3) {
  for (int i = 10001; i < 11000; ++i) {
    ns::Wrapper wrapper(i);
    EXPECT_EQ(wrapper.Get(), i);
  }
}