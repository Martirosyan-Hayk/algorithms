package main

func bubbleSort(arr []int) {

	isSorted := false
	for i := 0; (i < len(arr)-1) && !isSorted; i++ {
		isSorted = true
		for j := i + 1; j < len(arr); j++ {
			if arr[i] > arr[j] {
				arr[i], arr[j] = arr[j], arr[i]
				isSorted = false
			}
		}
	}
}

func bubbleSortRecursive(arr []int, n int) {
	if n == 1 {
		return
	}

	for i := 0; i < n-1; i++ {
		if arr[i] > arr[i+1] {
			arr[i], arr[i+1] = arr[i+1], arr[i]
		}
	}

	bubbleSortRec(arr, n-1)
}