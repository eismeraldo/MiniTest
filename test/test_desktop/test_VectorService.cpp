#include <gtest/gtest.h>

#include <VectorService.hpp>

TEST(VectorService, getItem) {
    VectorService::instance().fillItems();
    /**/
    ASSERT_EQ(5, VectorService::instance().getItem(5));
}
