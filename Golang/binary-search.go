package main

func binarySearch(nums []int, target int) int {
    start := 0
    end := len(nums) - 1

    for start < end {
        middle := (start + end) / 2

        if nums[middle] == target {
            return middle
        }

        if nums[middle] > target {
            end = middle - 1
        } else {
            start = middle + 1
        }
    }

    return -1
}