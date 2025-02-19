#ifndef STRAT_BIG_LIST
#define STRAT_BIG_LIST

#include <vector>

#include "Sorts.hpp"
#include "InsertSort.hpp"


class BigList{
    private:
        std::vector<int> lst;
        Sorts* sorter;
        void generate_random(int n);

    public:
        BigList(int x=25)
            : sorter{new InsertSort} {generate_random(x);}

        void sort();
        void print();
        ~BigList(){delete sorter;}
};


#endif
