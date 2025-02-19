#ifndef DECORATOR_ALT_COFFEE
#define DECORATOR_ALT_COFFEE

#include "Drink.hpp"

class Coffee: public Drink {
    public:
        Coffee()
            : Drink{"Coffee", "A warm cup o' joe.", 1.99} {}
};



#endif