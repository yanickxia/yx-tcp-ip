
#include <gtest/gtest.h>
#include "utils.h"

TEST (ALibraryTests, Print) {
    EXPECT_EQ(pasrse_ip_address("12.0.0.1"), 2);
}

TEST (ALibraryTests, Calculation) {
    EXPECT_EQ(4, 2 * 2);
}