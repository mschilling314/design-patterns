#include "BigList.hpp"
#include "MergeSort.hpp"

#include <iostream>
#include <random>


void BigList::generate_random(int n){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    for (int idx{0}; idx < n; ++idx){
        int x = dist(gen);
        this->lst.push_back(x);
    }
}


void BigList::sort(){
    int items_out_of_order{0};
    unsigned long len{this->lst.size()};
    for (int idx{0}; idx < len - 1; ++idx){
        if (this->lst[idx] > this->lst[idx+1]) ++items_out_of_order;
    }
    if (len > 50 && items_out_of_order > 10) {
        delete this->sorter;
        this->sorter = new MergeSort;
    }
    this->sorter->sort(&(this->lst));
}


void BigList::print(){
    std::cout << "\n[";
    unsigned long len {this->lst.size()};
    if (len){
        std::cout << this->lst[0];
        if (len > 1){
            for (int idx{1}; idx < len; ++idx){
                std::cout << ", ";
                std::cout << this->lst[idx];
            }
        }
    }
    std::cout << "]\n";
}