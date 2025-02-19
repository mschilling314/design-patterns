#include "Drink.hpp"
#include <vector>

float Drink::calculate_cost(){
    float cost{this->cost};
    for (auto condiment: this->condiments){
        cost += condiment.cost;
    }
}


void Drink::add_condiment(Condiment cond){
    this->condiments.push_back(cond);
}

void Drink::remove_condiment(const Condiment &cond){
    int idx{0};
    int len{this->condiments.size()};
    while (idx < len) {
        if (this->condiments[idx].name == cond.name){
            this->condiments[idx] = this->condiments[len - 1];
            this->condiments.pop_back();
            break;
        }
    }
}