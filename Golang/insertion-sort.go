package main

func insertionSort(arr []int) {
	for i := 1; i < len(arr); i++ {
		j := i - 1
		key := arr[i]
		for j >= 0 && arr[j] > key {
			arr[j+1] = arr[j]
			j--
		}
		arr[j+1] = key
	}
}