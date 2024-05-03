#include <stdio.h>

int main() {
    int count = 3;
    int arr[count];
    for(int o = 0; o < count; o++) {
        printf("enter num: ");
        scanf("%d", &arr[o]);
    }
    int duplicate = 0;
    for(int i = 0; i < count; i++) {
        for(int m = 1; m < count - 1; m++) {
            if(arr[i] == arr[m]) {
                duplicate = arr[i];
            }
        }
    }
    printf("%d", duplicate);
}