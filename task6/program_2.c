#include <stdio.h>

int main(void) {
    int size = 5;
    int arr[size];
    for(int k = 0; k < size; k++) {
        int num;
        printf("enter num : ");
        scanf("%d", &num);
        arr[k] = num;
    }
    for(int m = size - 1; m >= 0; m--) {
        printf(" %d ",arr[m]);
    }
}