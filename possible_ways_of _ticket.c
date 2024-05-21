<<<<<<< HEAD
#include <stdio.h>

int main() {
    int n;
    int testcase = 1;

    while (scanf("%d", &n) != EOF) {
        printf("Test Case %d:\n", testcase);

        for (int i = 1; i <= n; i++) {
            printf("Line %d:\n", i);

            if (i % 2 == 0) {
                for (int j = 1; j <= i; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            } else {
                for (int c = 1; c <= i; c++) {
                    printf("%d\n", c);
                }
            }
        }
        testcase++;
    }

    return 0;
}
=======
#include <stdio.h>

int main() {
    int n;
    int testcase = 1;

    while (scanf("%d", &n) != EOF) {
        printf("Test Case %d:\n", testcase);

        for (int i = 1; i <= n; i++) {
            printf("Line %d:\n", i);

            if (i % 2 == 0) {
                for (int j = 1; j <= i; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            } else {
                for (int c = 1; c <= i; c++) {
                    printf("%d\n", c);
                }
            }
        }
        testcase++;
    }

    return 0;
}
>>>>>>> 95b4bac31c74982ba41e6c86620a99637f80d45e
