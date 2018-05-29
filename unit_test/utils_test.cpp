
#include <gtest/gtest.h>
#include "utils.c"

TEST (ALibraryTests, Print) {
    EXPECT_EQ(pasrse_ip_address("12.0.0.1"), 2);
}

TEST (ALibraryTests, Calculation) {
    EXPECT_EQ(4, 2 * 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}