#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("nhap n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}
// độ phức tạp O(n)
// Created by Admin on 6/16/2025.
//
