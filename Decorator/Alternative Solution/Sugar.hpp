#ifndef DECORATOR_ALT_SUGAR
#define DECORATOR_ALT_SUGAR

#include "Condiment.hpp"

class Sugar: public Condiment {
    public:
        Sugar()
            : Condiment{"Sugar", "A sweet mineral that's a little unhealthy.", 0.15} {}
};


#endif