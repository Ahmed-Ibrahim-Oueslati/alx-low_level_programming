#include <stdio.h>

int main(void) {
    int limit = 1024;

    // Calculate the sum of multiples of 3
    int n3 = (limit - 1) / 3;
    int sum3 = 3 * n3 * (n3 + 1) / 2;

    // Calculate the sum of multiples of 5
    int n5 = (limit - 1) / 5;
    int sum5 = 5 * n5 * (n5 + 1) / 2;

    // Calculate the sum of multiples of 15 (common multiples of 3 and 5)
    int n15 = (limit - 1) / 15;
    int sum15 = 15 * n15 * (n15 + 1) / 2;

    // Calculate the final sum by subtracting the double-counted multiples of 15
    int finalSum = sum3 + sum5 - sum15;

    printf("Sum of multiples of 3 and 5 up to %d: %d\n", limit, finalSum);

    return 0;
}

