template <typename T>
int partition(T*& arr, int& start, int& end)
{
	T pivot = arr[end];
	int i = start - 1;
	for (int j = start; j <= end - 1; ++j)
	{
		if (arr[j] <= pivot)
		{
			i += 1;
			std::swap(arr[i], arr[j]);
		}
	}
	std::swap(arr[i + 1], arr[end]);
	return i + 1;
}

template <typename T>
void quickSort(T*& arr, int start, int end)
{
	if (start < end)
	{
		int pivot = partition(arr, start, end);
		quickSort(arr, start, pivot - 1);
		quickSort(arr, pivot + 1, end);
	}
}		
