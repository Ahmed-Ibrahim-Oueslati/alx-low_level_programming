#include <stdio.h>
#include <stdarg.h>

/**
 * sum - Calculates the sum of a variable number of integers.
 * @count: Number of integers to sum.
 * @...: Variable number of integers.
 *
 * Return: Sum of the integers.
 */
int sum(int count, ...)
{
    int total = 0;
    va_list args;

    // Initialize args to store all values after count
    va_start(args, count);

    // Access all the arguments assigned to args
    for (int i = 0; i < count; i++)
    {
        total += va_arg(args, int);
    }

    // Clean up the args object
    va_end(args);

    return total;
}

int main()
{
    printf("Sum of 1, 2, 3, 4 = %d\n", sum(4, 1, 2, 3, 4));
    printf("Sum of 5, 10, 15 = %d\n", sum(3, 5, 10, 15));
    printf("Sum of 7, 14, 21, 28, 35 = %d\n", sum(5, 7, 14, 21, 28, 35));

    return 0;
}
