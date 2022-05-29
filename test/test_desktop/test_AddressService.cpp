#include <gtest/gtest.h>

#include <AddressService.hpp>

TEST(AddressService, addr) {
    static const std::string fName = "Hans";
    static const std::string lName = "Muster";
    AddressService::instance().setAdrItem(FIRST_NAME, fName);
    AddressService::instance().setAdrItem(LAST_NAME, lName);
    std::string addr(50, ' ');
    AddressService::instance().getFormatedAddress(addr);

    ASSERT_EQ("Muster Hans", addr);
}
