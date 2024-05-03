#include <stdio.h>

int main(void) {
    int size = 3,copy[size],main[size],s,l,i;
    for(i = 0; i < size; i++) {
        printf("enter num : ");
        scanf("%d", &main[i]);
    }
    for(l = 0; l < size; l++) {
        copy[l] = main[l];
    }
    for(s = 0; s < size; s++) {
        printf(" %d ", copy[s]);
    }
}