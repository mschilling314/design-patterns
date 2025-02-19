#ifndef DECORATOR_ALT_DRINK
#define DECORATOR_ALT_DRINK

#include <string>
#include <vector>
#include "Condiment.hpp"

class Drink {
    public:
        std::string name;
        std::string description;
        float cost;
        std::vector<Condiment> condiments;

        Drink(std::string nomen, std::string desc="None", float price=0.0, std::vector<Condiment> conds={})
            : name{nomen}, description{desc}, cost{price}, condiments{conds} {}

        float calculate_cost();

        void add_condiment(Condiment cond);

        void remove_condiment(const Condiment &cond);
};


#endif