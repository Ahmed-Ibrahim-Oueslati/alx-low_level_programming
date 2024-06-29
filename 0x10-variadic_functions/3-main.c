#include "variadic_functions.h"
#include <stdio.h>

/*
 * main - Tests the print_all function with different arguments.
 *
 * Return: Always 0.
 */
int main(void)
{
    /* Test Case 1: Float, Char, Int, and NULL */
    print_all("ceis", 3.1558, 'B', 3, NULL);
    putchar('\n');  /* Print a newline for clarity */

    /* Test Case 2: Char, Int, and Strings */
    print_all("ceis", 'A', 42, "Hello", "World");
    putchar('\n');  /* Print a newline for clarity */

    /* Test Case 3: Float, Char, Int, and String */
    print_all("ceis", 1.2345, 'C', 0, "Goodbye");
    putchar('\n');  /* Print a newline for clarity */

    /* Test Case 4: Negative Float, Char, Int, and Multiple Strings */
    print_all("cefis", -99.99, 'D', 5, "Testing", "Variadic", "Functions");
    putchar('\n');  /* Print a newline for clarity */

    return (0);
}
