#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int i = 1;
loop:
    factorial *= i;
    i++;

    if (i <= num)
        goto loop;

    printf("Factorial of %d = %llu\n", num, factorial);

    return 0;
}
