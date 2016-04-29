#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <cstdlib>

template<class T>void bubbleSort(T* data, std::size_t size);

template<class T>
void bubbleSort(T* data, std::size_t size)
{
    bool change;

    for (std::size_t i=0; i<(size-1); ++i)
    {
        change = false;

        for (std::size_t j=0; j<(size-1-i); ++j)
            if (data[j] > data[j+1])
            {
                change = true;

                T aux     = data[j+1];
                data[j+1] = data[j];
                data[j]   = aux;
            }

        if (!change)
            return;
    }
}

#endif // BUBBLESORT_H

