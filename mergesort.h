#ifndef MERGESORT_H
#define MERGESORT_H

#include <cstdlib>

template<class T>void mergeSort(T *data, std::size_t start, std::size_t end);
template<class T>void merge(T* data, std::size_t start, std::size_t half, std::size_t end);

template<class T>
void mergeSort(T *data, std::size_t start, std::size_t end)
{
    if (start >= end)
        return;

    std::size_t half = (start + end) / 2 ;

    mergeSort<T>(data, start, half);
    mergeSort<T>(data, half+1, end);

    merge<T>(data, start, half, end);
}


template<class T>
void merge(T* data, std::size_t start, std::size_t half, std::size_t end)
{
    std::size_t i = start;   /* Sub1 index */
    std::size_t j = half+1;  /* Sub2 index */
    std::size_t k;           /* Aux  index */

    T* aux = new T[end-start+1];

    for (k = start; (i <= half) && (j <= end); ++k)
    {
        if (data[i] < data[j])
        { aux[k-start] = data[i]; ++i; }
        else
        { aux[k-start] = data[j]; ++j; }
    }

    if (i > half)
        while (j <= end)
        {
            aux[k-start] = data[j];
            ++j;
            ++k;
        }

    else
        while (i <= half)
        {
            aux[k-start] = data[i];
            ++i;
            ++k;
        }

    for (std::size_t h = start; h <= end; ++h)
        data[h] = aux[h-start];

    delete[] aux;
}

#endif // MERGESORT_H

