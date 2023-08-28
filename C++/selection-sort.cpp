template<typename T>
void swap(T& element1, T& element2)
{
    T tmp = element1;
    element1 = element2;
    element2 = tmp;
}

template<typename T>
void selectionSort(T*& arr, const int& size)
{
    for (int last = size - 1; last >= 1; --last)
    {
      
        int minIndex = last;
        for (int j = last - 1; j >= 0; --j)
        {
            if (arr[j] > arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[last]);
       
    } 
}

