#include <stdio.h>

int main() {
    int arr[] = {3,7,5,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

// độ phức tạp O(n^2)
// Created by Admin on 6/16/2025.
//
