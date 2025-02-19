#ifndef STRAT_MERGE
#define STRAT_MERGE

#include "Sorts.hpp"

#include <vector>

class MergeSort: public Sorts {
    private:
        std::vector<int> _helper(std::vector<int> lst);

    public:
        void sort(std::vector<int>* lst) override;
};


#endif