#include <stdio.h>
#include <stdlib.h>

int* mallocArray(int n){
    int* arr = (int*)malloc( n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}

int main() {
    int n = 5;
    int* arr = mallocArray(n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

// độ phức tạp: O(n)
// Created by Admin on 6/16/2025.
//
