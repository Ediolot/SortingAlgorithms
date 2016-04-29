#ifndef INSERTIONSECSORT_H
#define INSERTIONSECSORT_H

#include <cstdlib>

template<class T>void insertionSecSort(T* data, std::size_t size);

template<class T>
void insertionSecSort(T* data, std::size_t size)
{
    for (std::size_t i=1; i<size; ++i)
    {
        std::size_t j = i;
        T aux = data[i];

        while ( aux < data[j-1] && j > 0)
        {
            data[j] = data[j-1];
            --j;
        }

        data[j] = aux;
    }
}

#endif // INSERTIONSECSORT_H

