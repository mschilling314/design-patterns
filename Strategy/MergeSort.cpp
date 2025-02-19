#include "MergeSort.hpp"

#include <vector>

std::vector<int> MergeSort::_helper(std::vector<int> lst){
    size_t len {lst.size()};

    if (len < 2) return lst;

    size_t mid = len / 2;
    std::vector<int> left(lst.begin(), lst.begin() + mid);
    std::vector<int> right(lst.begin() + mid, lst.end());

    left = MergeSort::_helper(left);
    right = MergeSort::_helper(right);

    size_t idx{0};
    size_t idy{0};
    size_t lenx{left.size()};
    size_t leny{right.size()};

    while (idx + idy < len){
        if (idx == lenx){
            lst[idx + idy] = right[idy];
            ++idy;
        } else if (idy == leny){
            lst[idx + idy] = left[idx];
            ++idx;
        } else {
            if (left[idx] < right[idy]){
                lst[idx + idy] = left[idx];
                ++idx;
            } else{
                lst[idx + idy] = right[idy];
                ++idy;
            }
        }
    }
    return lst;
}



void MergeSort::sort(std::vector<int>* lst){
    *lst = MergeSort::_helper(*lst);
}