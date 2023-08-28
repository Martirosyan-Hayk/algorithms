template<typename T>
void insertionSort(T*& arr, const int& size)
{
    for (int i = 1; i < size; ++i)
    {
        int j = i - 1;
        T key = arr[i];
        while (arr[j] > key && j >= 0)
        {         
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

