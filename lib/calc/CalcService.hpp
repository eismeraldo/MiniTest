#pragma once

class CalcService {
   public:
    /**
     * @brief Adds the two numbers
     *
     * @param pNbr1
     * @param pNbr2
     * @return int sum
     */
    int add(int pNbr1, int pNbr2) { return pNbr1 + pNbr2; }

    /**
     * @brief Subtraction
     *
     * @param pMinuend
     * @param pSubtrahend
     * @return int = pMinuend - pSubtrahend
     */
    int subtract(int pMinuend, int pSubtrahend) { return pMinuend - pSubtrahend; }

    /**
     * @brief Singleton Methode.
     *
     * @return AktorService&
     */
    static CalcService& instance() {
        static CalcService s_instance;
        return s_instance;
    }

    /**
     * @brief Singleton should not be clonable.
     *
     */
    CalcService(CalcService& other) = delete;

    /**
     * @brief Singleton should not be assignable.
     *
     */
    void operator=(const CalcService&) = delete;
    CalcService(/* args */){};

   private:
    /* data */
};
