#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <cstdlib>

template<class T>void selectionSort(T* data, std::size_t size);

template<class T>
void selectionSort(T* data, std::size_t size)
{
    for (std::size_t i=0; i<(size-1); ++i)
    {
        std::size_t min = i;

        for (std::size_t j = i+1; j < size; ++j)
            if (data[j] < data[min])
                min = j ;

        T aux     = data[min];
        data[min] = data[i];
        data[i]   = aux;
    }
}

#endif // SELECTIONSORT_H

