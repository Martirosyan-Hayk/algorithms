template<typename T>
void merge(T*& arr, int& first, int& mid, int& last)
{
    T temp[size]{0};

    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;

    int index = first1;

    for (; (first1 <= last1) && (first2 <= last2); ++index)
    {
        if (arr[first1] < arr[first2])
        {
            temp[index] = arr[first1];
            ++first1;
        }
        else
        {
            temp[index] = arr[first2];
            ++first2;
        }
    }

    for (; first1 <= last1; ++first1, ++index)
    {
        temp[index] = arr[first1];
    }

    for (; first2 <= last2; ++first2, ++index)
    {
        temp[index] = arr[first2];
    }

    for (index = first; index <= last; ++index)
    {
        arr[index] = temp[index];
    }

}
template<typename T>
void mergeSort(T*& arr, int first, int last)
{
    if (first < last)
    {
        int mid = (first + last) / 2;
        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}
