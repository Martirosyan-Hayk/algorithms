package main

func selectionSort(arr []int) {
	for i := len(arr) - 1; i >= 1; i-- {
		minIndex := i
		for j := i - 1; j >= 0; j-- {
			if arr[j] > arr[minIndex] {
				minIndex = j
			}
		}
		arr[minIndex], arr[i] = arr[i], arr[minIndex]

	}
}