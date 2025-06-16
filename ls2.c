#include <stdio.h>

void printDouble(int n) {
    int i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i *=2;
    }
}

int main() {
    int n =5;
    printDouble(n);
    return 0;
}
// Độ phức tạp O(log n)
// Created by Admin on 6/16/2025.
//
