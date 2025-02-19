#ifndef DECORATOR_ALT_HOT_CHOCOLATE
#define DECORATOR_ALT_HOT_CHOCOLATE

#include "Drink.hpp"

class Hot_Chocolate: public Drink{
    public:
        Hot_Chocolate()
            : Drink{"Hot Chocolate", "A sweet warm beverage perfect for cold winter days.", 1.10} {}
};



#endif