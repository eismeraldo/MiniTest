#pragma once

#include <ArduinoJson.h>

#include <string>

const size_t MAX_JSON_DOC_SIZE = 1024;

static const std::string FIRST_NAME = "fName";
static const std::string LAST_NAME = "lName";
static const std::string STREET = "street";

class AddressService {
   public:
    /**
     * @brief Set the Adr Item object
     *
     * @param pItemName
     * @param pItem
     */
    void setAdrItem(const std::string& pItemName, const std::string& pItem) {
        /**/
        jsonDoc[pItemName.c_str()] = pItem.c_str();
    }

    std::string getFormatedAddress(std::string& addr) {
        addr.clear();
        addr = jsonDoc[LAST_NAME].as<std::string>() + " " + jsonDoc[FIRST_NAME].as<std::string>() + "\0";
        return addr;
    }

    /**
     * @brief Singleton Methode.
     *
     * @return AddressService&
     */
    static AddressService& instance() {
        static AddressService s_instance;
        return s_instance;
    }

    /**
     * @brief Singleton should not be clonable.
     *
     */
    AddressService(AddressService& other) = delete;

    /**
     * @brief Singleton should not be assignable.
     *
     */
    void operator=(const AddressService&) = delete;

    /**
     * @brief Constructor
     *
     */
    AddressService(/* args */){};

   private:
    StaticJsonDocument<MAX_JSON_DOC_SIZE> jsonDoc;
};
