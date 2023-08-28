template<typename T>
void swap(T& element1, T& element2)
{
    T tmp = element1;
    element1 = element2;
    element2 = tmp;
}

template<typename T>
void bubbleSort(T*& arr, const int& size)
{
    bool sorted = false;

    for (int pass = 1; (pass < size) && !sorted; ++pass)
    {
        sorted = true;
        for (int index = 0; index < size - pass; ++index)
        {
            int nextIndex = index + 1;
            if (arr[index] > arr[nextIndex])
            {
                swap(arr[index], arr[nextIndex]);
                sorted = false;
            }
        }
    }
}

