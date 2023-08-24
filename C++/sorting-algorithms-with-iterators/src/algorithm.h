#ifndef _ALGORITHM_
#define _ALGORITHM_

#include <algorithm>
#include "declaration/buble-sort.h"
#include "declaration/insertion-sort.h"
#include "declaration/selection-sort.h"
#include "declaration/quick-sort.h"
#include "declaration/merge-sort.h"
#include "declaration/heap-sort.h"

template <typename Iterator>
void nonstd::bubbleSort(Iterator begin, Iterator end)
{
    for (Iterator i = begin; i != end; ++i)
        for (Iterator j = begin; j < i; ++j)
            if (*i < *j)
                std::iter_swap(i, j);
}

template <typename Iterator>
void nonstd::insertionSort(Iterator begin, Iterator end)
{
    std::iter_swap(begin, std::min_element(begin, end));
    for (Iterator start = begin; ++start != end; begin = start)
    {
        for (Iterator swapElem = start; *swapElem < *begin; --swapElem, --begin)
        {
            std::iter_swap(swapElem, begin);
        }
    }
}

template <typename Iterator>
void nonstd::selectionSort(Iterator begin, Iterator end)
{
    for (Iterator start = begin; start != end; ++start)
    {
        std::iter_swap(start, std::min_element(start, end));
    }
}

template <class Iterator>
void nonstd::quickSort(Iterator begin, Iterator end)
{
    if (end <= begin)
        return;
    Iterator pivot = begin, middle = begin + 1;
    for (Iterator i = begin + 1; i < end; ++i)
    {
        if (*i < *pivot)
        {
            std::iter_swap(i, middle);
            ++middle;
        }
    }
    std::iter_swap(begin, middle - 1);
    quickSort(begin, middle - 1);
    quickSort(middle, end);
}

template <class Iterator>
void nonstd::mergeSort(Iterator begin, Iterator end)
{
    if (end <= begin + 1)
        return;
    Iterator middle = begin + (end - begin) / 2;
    mergeSort(begin, middle);
    mergeSort(middle, end);
    std::inplace_merge(begin, middle, end);
}

template <class Iterator>
void nonstd::heapSort(Iterator begin, Iterator end)
{
    std::make_heap(begin, end);
    while (begin != end)
        std::pop_heap(begin, end--);
}

#endif //_ALGORITHM_!