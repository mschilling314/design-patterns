#ifndef DECORATOR_ALT_CONDIMENTS
#define DECORATOR_ALT_CONDIMENTS

#include <vector>
#include <string>


class Condiment {
    public:
        std::string name;
        std::string description;
        float cost;

        Condiment(std::string nomen="None", std::string desc="None", float price=0.0)
            : name{nomen}, description{desc}, cost{price} {}

};



#endif