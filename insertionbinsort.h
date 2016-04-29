#ifndef INSERTIONBINSORT_H
#define INSERTIONBINSORT_H

#include <cstdlib>

template<class T>void insertionBinSort(T* data, std::size_t size);

template<class T>
void insertionBinSort(T* data, std::size_t size)
{
    for (std::size_t i=1; i<size; ++i)
    {
        std::size_t start = 0;
        std::size_t half  = 0;
        std::size_t end   = i;

        T aux = data[i];

        while (start < end)
        {
            half = (start+end) / 2;

            if (data[half] < aux)
                start = half+1;

            else
                end = half;
        }

        bool j_pos = true;
        for (std::size_t j = i-1; j >= start && j_pos; --j)
        {
            data[j+1] = data[j];
            j_pos = j!=0;
        }

        data[start] = aux;
    }
}

#endif // INSERTIONBINSORT_H

