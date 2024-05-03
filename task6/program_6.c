#include <stdio.h>

int main() {
    int count = 4;
    int n;
    int arr[count];
    for(int i = 0; i < count; i++) {
        printf("enter num: ");
        scanf("%d", &arr[i]);
    }
    for (int m = 0; m < count; m++) {
        n = 0;
        for (int j = 0; j < count; j++) {
            if (m != j && arr[m] == arr[j]) {
                n++;
                break;
            }
        }
        if (n == 0) {
            printf(" %d ", arr[m]);
        }
    }
}
