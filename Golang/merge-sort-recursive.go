package main


func merge(arr []int, left int, middle int, right int) {
    n1 := middle - left + 1
    n2 := right - middle

    leftArr := make([]int, n1)
    rightArr := make([]int, n2)

    for i := 0; i < n1; i++ {
        leftArr[i] = arr[left+i]
    }
    for j := 0; j < n2; j++ {
        rightArr[j] = arr[middle+1+j]
    }

    i := 0
    j := 0
    k := left

    for i < n1 && j < n2 {
        if leftArr[i] <= rightArr[j] {
            arr[k] = leftArr[i]
            i++
        } else {
            arr[k] = rightArr[j]
            j++
        }
        k++
    }

    for i < n1 {
        arr[k] = leftArr[i]
        i++
        k++
    }

    for j < n2 {
        arr[k] = rightArr[j]
        j++
        k++
    }
}

func mergeSort(arr []int, left int, right int) {
    if left < right {
        middle := left + (right-left)/2

        mergeSort(arr, left, middle)
        mergeSort(arr, middle+1, right)

        merge(arr, left, middle, right)
    }
}