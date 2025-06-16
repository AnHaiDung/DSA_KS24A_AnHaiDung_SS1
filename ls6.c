#include <stdio.h>

int main() {
    int array[]={1,2,3,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size=sizeof(array)/sizeof(int);
    int maxCount=0;
    for(int i=0;i<size;i++) {
        int count=0;
        for(int j=0;j<size;j++) {
            if(array[i]==array[j]) {
                count++;
            }
        }
        if(count>maxCount) {
            maxCount=count;
        }
    }
    printf("maxCount=%d\n", maxCount);
    return 0;
}

// độ phức tạp O(n)
// Created by Admin on 6/16/2025.
//
