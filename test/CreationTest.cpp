#include "gtest/gtest.h"
#include "Wrapper.h"

TEST(CreationTest, DefaultConstructor) {
  EXPECT_NO_THROW({
                    ns::Wrapper wrapper(3);
                  });
}