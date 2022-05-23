#include <gtest/gtest.h>

#include <CalcService.hpp>

TEST(CalcServiceTest, add) {
    ASSERT_EQ(15, CalcService::instance().add(5, 10));
    ASSERT_EQ(5, CalcService::instance().add(-5, 10));
}

TEST(CalcServiceTest, subtract) {
    ASSERT_EQ(7, CalcService::instance().subtract(10, 3));
    ASSERT_EQ(-15, CalcService::instance().subtract(-5, 10));
}
