#include "BigList.hpp"
#include <iostream>


int main(){
    std::cout << "How many elements should we have?\n";
    int n{};
    std::cin >> n;
    std::cout << '\n';
    BigList lst{n};
    lst.print();
    lst.sort();
    lst.print();

    return 0;
}