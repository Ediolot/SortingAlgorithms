#ifndef SHELLSORT_H
#define SHELLSORT_H

#include <cstdlib>

template<class T>void shellSort(T *data, std::size_t size, float alpha = 0);

template<class T>
void shellSort(T *data, std::size_t size, float alpha)
{
    for (std::size_t delta=size/2; delta > 0; ) /* Gap */
    {
        for (std::size_t i = delta; i < size; ++i)
        {
            T aux = data[i];

            std::size_t j = i;
            for (; j>=delta && (aux < data[j-delta]); j -= delta)
                data[j] = data[j-delta];

            data[j] = aux;
        }

        std::size_t new_delta = alpha==0 ? delta/2 : delta*alpha;
                        delta = (delta>1 && new_delta<1) ? 1 : new_delta;
    }
}

#endif // SHELLSORT_H

