
#include <gtest/gtest.h>

static void logger(const char* txt);

/**
 * =============================================================================
 * Testcases aufrufen
 * =============================================================================
 */
int main(int argc, char** argv) {
#if LV_USE_LOG != 0
    lv_log_register_print_cb(logger);
#endif

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

/**
 * @brief Logger from LVGL. Is activated when LV_USE_LOG 1  in lv_conf.h is set.
 *
 */
#if LV_USE_LOG != 0
static void logger(const char* txt) { printf(txt); }
#endif
