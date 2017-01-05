#ifndef FILTERINGCONTEXT_H
#define FILTERINGCONTEXT_H

#include <FilteringAlgorithm/FilteringAlgorithm.h>


class FilteringContext {
private:

    FilteringAlgorithm * _filter;

public:

    FilteringContext(FilteringAlgorithm * filter);

    ~FilteringContext();
    
    void run();

    void saveResult();

    void setParameter();
    
};

#endif /* FILTERINGCONTEXT_H */