#ifndef DECORATOR_ALT_LATTE
#define DECORATOR_ALT_LATTE

#include "Drink.hpp"

class Latte: public Drink{
    public:
        Latte()
            : Drink{"Latte", "A coffee with some frothed milk in it.", 1.99} {}
};


#endif