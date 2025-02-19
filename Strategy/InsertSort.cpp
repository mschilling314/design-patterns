#include "InsertSort.hpp"
#include <vector>


void InsertSort::sort(std::vector<int>* lst) {
    unsigned long len{(*lst).size()};
    if (len < 2) return;

    for (size_t idx{1}; idx < len; ++idx){
        int el_to_insert{(*lst)[idx]};
        size_t idy{idx};
        while (idy > 0 && (*lst)[idy-1] > el_to_insert){
            (*lst)[idy] = (*lst)[idy-1];
            --idy; 
        }
        (*lst)[idy] = el_to_insert;
    }
}