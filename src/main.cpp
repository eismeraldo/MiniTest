#include <Arduino.h>

#include <AddressService.hpp>
#include <CalcService.hpp>
#include <VectorService.hpp>

static void logger(const char* txt);

void setup() {
    Serial.begin(115200);
    /* Registriere die eigene LOG Callback Funktion*/
#if LV_USE_LOG != 0
    lv_log_register_print_cb(logger);
#endif
    LV_LOG_USER("Start");

    /**/
    Serial.printf("add 5 + 10 = %i\n", CalcService::instance().add(5, 10));
    Serial.printf("subtract 10 - 3 = %i\n", CalcService::instance().subtract(10, 3));
    /**/
    static const std::string fName = "Hans";
    static const std::string lName = "Muster";
    AddressService::instance().setAdrItem(FIRST_NAME, fName);
    AddressService::instance().setAdrItem(LAST_NAME, lName);
    std::string addr(50, ' ');
    AddressService::instance().getFormatedAddress(addr);
    Serial.printf("Address = %s\n", addr.c_str());
    /**/
    VectorService::instance().fillItems();
    Serial.printf("Item 5 = %i\n", VectorService::instance().getItem(5));
}

void loop() {
    // put your main code here, to run repeatedly:
}

/**
 * @brief Logger from LVGL. Is activated when LV_USE_LOG 1  in lv_conf.h is set.
 *
 */
#if LV_USE_LOG != 0
static void logger(const char* txt) {
    Serial.print(txt);
    Serial.flush();
}
#endif
