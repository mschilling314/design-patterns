#ifndef DECORATOR_ALT_CARAMEL
#define DECORATOR_ALT_CARAMEL

#include "Condiment.hpp"

class Caramel: public Condiment{
    public:
        Caramel()
            : Condiment{"Caramel", "Sweet and viscous, found at carnivals.", 0.05} {}
};


#endif