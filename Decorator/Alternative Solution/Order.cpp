#include "Order.hpp"

#include "Drink.hpp"
#include "Coffee.hpp"
#include "Latte.hpp"
#include "Hot_Chocolate.hpp"

#include "Sugar.hpp"
#include "Cream.hpp"
#include "Honey.hpp"
#include "Caramel.hpp"

#include <vector>
#include <iostream>


Drink Order::_choose_drink(){
    int choice{100};
    std::cout << "Please press the number corresponding to your choice then hit enter:\n";
    std::cout << "1. Coffee\n";
    std::cout << "2. Latte\n";
    std::cout << "3. Hot Chocolate\n\n";
    while (choice <= 0 || 3 < choice){
        std::cin >> choice;
        if (choice <= 0 || 3 < choice) std::cout << "Please try again.\n";
    }

    switch (choice){
        case 1:
            return Coffee();
        case 2:
            return Latte();
        case 3:
            return Hot_Chocolate();
    }
}


Drink Order::_choose_condiments(Drink d){
    int choice{100};
    while (choice) {
        std::cout << "Please press a number corresponding to the following choices, or 0 to exit.\n";
        std::cout << "1. Sugar\n";
        std::cout << "2. Cream\n";
        std::cout << "3. Honey\n";
        std::cout << "4. Caramel\n";
        std::cin >> choice;
        if (choice < 0 || 4 < choice) std::cout << "Invalid choice, please try again.\n";
        else {
            switch (choice){
                case 1:
                    d.add_condiment(Sugar());
                    break;
                case 2:
                    d.add_condiment(Cream());
                    break;
                case 3:
                    d.add_condiment(Honey());
                    break;
                case 4:
                    d.add_condiment(Caramel());
                    break;
                default:
                    return d;
            }
        }
    }
}


void Order::_print_current_order(){
    int len = this->items.size();
    for (int idx{0}; idx < len; ++idx){
        Drink d = this->items[idx];
        std::cout << idx + 1 << ". " << d.name;
        unsigned long len_c {d.condiments.size()};
        if (len_c){
            std::cout << " with ";
            std::cout << d.condiments[0].name;
            if (len_c > 1){
                for (int idy{1}; idy < len_c; ++idy){
                    std::cout << ", ";
                    std::cout << d.condiments[idy].name;
                }
            }
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}


void Order::_add_drink(){
    Drink drink {Order::_choose_drink()};
    drink = Order::_choose_condiments(drink);
    this->items.push_back(drink);
}


void Order::_remove_drink(int idx){
    if (idx < 0 || idx >= this->items.size()) {
        std::cout << "Invalid index!\n";
        return;
    }
    this->items.erase(this->items.begin() + idx);
}


float Order::_calculate_total_cost(){
    float cost {0.0};
    for (auto item: items){
        cost += item.calculate_cost();
    }
    return cost;
}



void Order::place_order(){
    std::cout << "Welcome to Matt's Cafe!\n\n";
    std::cout << "Let's start your order, what would you like to drink?\n";
    Order::_add_drink();
    int choice{100};
    while (choice){
        std::cout << "Nice choice!  Now, please choose from the following options, pressing the number corresponding to your option:\n";
        std::cout << "0. Check out\n";
        std::cout << "1. Add another drink\n";
        std::cout << "2. Remove a drink\n";
        std::cin >> choice;
        switch (choice) {
            case 0:
                {
                    float cost {Order::_calculate_total_cost()};
                    std::cout << "Thank you for shopping with us today!  That'll be $" << cost << "\nGoodbye now!\n\n";
                    return;
                }
            case 1:
                Order::_add_drink();
                break;
            case 2:
                {
                    int drink_choice {0};
                    std::cout << "Please select the number corresponding to the drink you'd like to remove:\n";
                    Order::_print_current_order();
                    std::cin >> drink_choice;
                    if (drink_choice && drink_choice < this->items.size()) Order::_remove_drink(drink_choice);
                    else std::cout << "Hmm that doesn't seem to be a valid choice...\n";
                    break;
                }
            default:
                std::cout << "That wasn't a valid option.  Please try again.\n";
                break;
        }
    }
}