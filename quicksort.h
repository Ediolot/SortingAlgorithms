#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <cstdlib>

template<class T>void quickSort(T *data, long int start, long int end);

template<class T>
void quickSort(T *data, long int start, long int end)
{
    long int bot = start;
    long int top = end;

    T pivot = data[(start + end) / 2];
    T aux;

    while (bot <= top)
    {
        while (data[bot] < pivot) ++bot;
        while (data[top] > pivot) --top;

        if (bot <= top)
        {
            aux       = data[bot];
            data[bot] = data[top];
            data[top] = aux;

            ++bot;
            --top;
        }
    }

    if (start < top) quickSort<T>(data, start,  top);
    if (bot   < end) quickSort<T>(data,   bot, end);
}

#endif // QUICKSORT_TEST_H
