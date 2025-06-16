#include <stdio.h>

int main() {
    int arr[] = {3,7,5,3,2};
    int check = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                check = 1;
            }
        }
    }
    if (check == 0) {
        printf("mang khong co phan tu trung\n");
    }else {
        printf("mang co phan tu trung\n");
    }
}

//
// Created by Admin on 6/16/2025.
//
