#ifndef BUBBLESORT_SLOW_H
#define BUBBLESORT_SLOW_H

#include <cstdlib>

template<class T>void bubbleSortSlow(T* data, std::size_t size);

template<class T>
void bubbleSortSlow(T* data, std::size_t size)
{

    for (std::size_t i=0; i<(size-1); ++i)

        for (std::size_t j=0; j<(size-1); ++j)

            if (data[j] > data[j+1])
            {
                T aux     = data[j+1];
                data[j+1] = data[j];
                data[j]   = aux;
            }
}

#endif // BUBBLESORT_SLOW_H

