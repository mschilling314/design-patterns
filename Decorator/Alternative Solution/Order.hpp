#ifndef DECORATOR_ALT_ORDER
#define DECORATOR_ALT_ORDER

#include <vector>

#include "Drink.hpp"

class Order{
    private:
        std::vector<Drink> items;
        Drink _choose_drink();
        Drink _choose_condiments(Drink d);
        void _print_current_order();
        void _add_drink();
        void _remove_drink(int idx);
        float _calculate_total_cost();

    public:
        void place_order();

};



#endif