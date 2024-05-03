#include <stdio.h>

int main() {
    int repeat = 10;
    int nums[repeat];
    for(int i = 0; i < repeat; i++) {
        int num;
        printf("enter your num%d : ",i);
        scanf("%d", &num);
        nums[i] = num;
    }
    for(int o = 0; o < repeat; o++) {
        printf(" %d ", nums[o]);
    }
}