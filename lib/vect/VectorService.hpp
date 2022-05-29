#pragma once

#include "etl/numeric.h"
#include "etl/vector.h"

static etl::vector<int, 10> v1(10);

class VectorService {
   public:
    void fillItems() {
        etl::iota(v1.begin(), v1.end(), 0);  // Fill with 0 through 9
    }
    int getItem(int pIndex) { return v1.at(pIndex); }

    /**
     * @brief Singleton Methode.
     *
     * @return VectorService&
     */
    static VectorService& instance() {
        static VectorService s_instance;
        return s_instance;
    }

    /**
     * @brief Singleton should not be clonable.
     *
     */
    VectorService(VectorService& other) = delete;

    /**
     * @brief Singleton should not be assignable.
     *
     */
    void operator=(const VectorService&) = delete;

    /**
     * @brief Constructor
     *
     */
    VectorService(/* args */){};

   private:
};
