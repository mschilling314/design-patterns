#ifndef DECORATOR_ALT_ORDER
#define DECORATOR_ALT_ORDER

#include <vector>

#include "Drink.hpp"

class Order{
    private:
        std::vector<Drink> items;

    public:
        void add_drink();

        void remove_drink(int idx);

}



#endif