#ifndef DECORATOR_ALT_CREAM
#define DECORATOR_ALT_CREAM

#include "Condiment.hpp"

class Cream: public Condiment{
    public:
        Cream()
            : Condiment{"Cream", "A dairy product.", 0.25} {}
};


#endif