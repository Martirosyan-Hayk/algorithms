package main

func partition(arr []int, low int, high int) int {
	pivot := arr[high]
	i := low - 1

	for j := low; j <= high-1; j++ {
		if arr[j] <= pivot {
			i++
			arr[i], arr[j] = arr[j], arr[i]
		}
	}

	arr[i+1], arr[high] = arr[high], arr[i+1]
	return i + 1
}

func quickSort(arr []int, low int, high int) {
	stack := make([]int, high-low+1)
	top := -1

	top++
	stack[top] = low
	top++
	stack[top] = high

	for top >= 0 {
		high = stack[top]
		top--
		low = stack[top]
		top--

		pivotIndex := partition(arr, low, high)

		if pivotIndex-1 > low {
			top++
			stack[top] = low
			top++
			stack[top] = pivotIndex - 1
		}

		if pivotIndex+1 < high {
			top++
			stack[top] = pivotIndex + 1
			top++
			stack[top] = high
		}
	}
}