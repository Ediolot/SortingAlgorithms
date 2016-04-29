#ifndef COCKTAILSORT_H
#define COCKTAILSORT_H

#include <cstdlib>

template<class T>void cocktailSort(T* data, std::size_t size);

template<class T>
void cocktailSort(T* data, std::size_t size)
{
    bool change;

    for (std::size_t i=0; i<size/2; ++i)
    {
        change=false;

        for (std::size_t j=i; j<(size-i-1); ++j)
            if (data[j] > data[j+1])
            {
                change = true;
                T x       = data[j+1] ;
                data[j+1] = data[j] ;
                data[j]   = x ;
            }

        for (std::size_t j= (size-i-2); j > i; --j)
            if (data[j] < data[j-1])
            {
                change = true;
                T x       = data[j-1] ;
                data[j-1] = data[j] ;
                data[j]   = x ;
            }

        if (!change)
            return;
    }
}

#endif // COCKTAILSORT_H

