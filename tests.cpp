#include "gtest/gtest.h"
#include "methods.h"

TEST(findRoots, expectedTwoRoots) {
    float* x = findRoots(2, 5, -3);
    EXPECT_EQ(2, x[0]);
    EXPECT_EQ(0.5, x[1]);
    EXPECT_EQ(-3, x[2]);
    delete [] x;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
