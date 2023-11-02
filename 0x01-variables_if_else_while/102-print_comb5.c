#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;

    while (i < 100)
    {
        j = i + 1; // Start j at i + 1 to avoid duplicates
        while (j < 100)
        {
            putchar((i / 10) + '0'); // Print first digit of i
            putchar((i % 10) + '0'); // Print second digit of i

            putchar(' '); // Print space

            putchar((j / 10) + '0'); // Print first digit of j
            putchar((j % 10) + '0'); // Print second digit of j

            if (i < 98 || j < 99) // Avoid trailing comma
            {
                putchar(',');
                putchar(' ');
            }

            j++;
        }
        i++;
    }

    putchar('\n');

    return (0);
}

