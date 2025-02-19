#ifndef DECORATOR_ALT_HONEY
#define DECORATOR_ALT_HONEY

#include "Condiment.hpp"

class Honey: public Condiment{
    public:
        Honey()
            : Condiment{"Honey", "Bee puke.", 0.20} {}
};

#endif