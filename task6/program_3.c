#include <stdio.h>

int main(void) {
    int size = 3, arr[size], sum = 0;
    for(int i = 0; i < size; i++) {
        printf("enter your num: ");
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
}