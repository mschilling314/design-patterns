#ifndef STRAT_SORTS
#define STRAT_SORTS

#include <vector>

class Sorts{
    public:
        virtual void sort(std::vector<int>* lst) = 0;
        virtual ~Sorts() {};
};



#endif