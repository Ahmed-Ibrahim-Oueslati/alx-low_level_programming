#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	


    int n, j, u, y;
    for (n = 48; n < 58; n++) {
        for (j = 48; j < 58; j++) {
            for (u = 48; u < 58; u++) {
                for (y = 48; y < 58; y++) {
                    if ((n < u) || ((n == u) && (j < y))) {
                        putchar(n);
                        putchar(j);
                        putchar(u);
                        putchar(y);
                        if (n != 57 || j != 56 || u != 57 || y != 57) {
                            putchar(44);
                            putchar(32);
                        }
                    }
                }
            }
        }
    }
    putchar('\n');



return (0);   
}
