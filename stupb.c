#include <stdio.h>

int main() {
    int i, j, min = 0, temp, a[] = {3, 4, 6, 2, 8};

    for (i = 0; i < 5; i++) {
        min = i;
        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}


