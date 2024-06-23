# Variadic Functions in C

## Introduction

Variadic functions in C are functions that can accept a variable number of arguments. They are useful when you don't know in advance how many arguments will be passed to the function. The most common example of a variadic function is `printf`.

## How to Define a Variadic Function

To define a variadic function, you need to include the `stdarg.h` header and use a few macros provided by this header:

- `va_list`: A type to hold the information needed to retrieve the additional arguments.
- `va_start`: A macro to initialize the `va_list` variable.
- `va_arg`: A macro to retrieve each argument in turn.
- `va_end`: A macro to clean up the `va_list` variable.

Here's an example of a simple variadic function that sums its arguments:

```c
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Sums all its parameters.
 *
 * @n: The number of parameters.
 * Return: The sum of all parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    int sum = 0;

    if (n == 0)
    {
        return 0;
    }

    va_start(ap, n);

    for (i = 0; i < n; i++)
    {
        sum += va_arg(ap, int);
    }

    va_end(ap);
    return sum;
}

int main(void)
{
    int sum;

    sum = sum_them_all(3, 1, 2, 3);
    printf("Sum: %d\n", sum);

    sum = sum_them_all(5, 10, 20, 30, 40, 50);
    printf("Sum: %d\n", sum);

    return 0;
}
