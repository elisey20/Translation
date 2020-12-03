#include "gtest/gtest.h"
#include "lib.h"

TEST(findRoots, expectedTwoRoots) {
    float* x = findRoots(2, 5, -3);
    EXPECT_EQ(2, x[0]);
    EXPECT_EQ(0.5, x[1]);
    EXPECT_EQ(-3, x[2]);
    delete [] x;
}

TEST(findRoots, expectedOneRoot) {
    float* x = findRoots(1, -6, 9);
    EXPECT_EQ(1, x[0]);
    EXPECT_EQ(3, x[1]);
    delete [] x;
}

TEST(findRoots, expectedNoRoots) {
    float* x = findRoots(1, 1, 1);
    EXPECT_EQ(0, x[0]);
    delete [] x;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
