
#include <gtest/gtest.h>

static void logger(const char* txt);

/**
 * =============================================================================
 * Testcases aufrufen
 * =============================================================================
 */
int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
