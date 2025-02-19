#ifndef STRAT_INSERT
#define STRAT_INSERT

#include "Sorts.hpp"

#include <vector>

class InsertSort: public Sorts{
    public:
        void sort(std::vector<int>* lst) override;
};


#endif