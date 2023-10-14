#include "gtest/gtest.h"
#include "Wrapper.h"

TEST(CreationTest, Test1) {
  EXPECT_NO_THROW({
                    ns::Wrapper wrapper(3);
                  });
}

TEST(CreationTest, Test2) {
  EXPECT_NO_THROW({
                    for (int i = 0; i < 1000; ++i)
                      ns::Wrapper wrapper(i);
                  });
}

TEST(CreationTest, Test3) {
  EXPECT_NO_THROW({
                    for (int i = 10001; i < 11000; ++i)
                      ns::Wrapper wrapper(i);
                  });
}