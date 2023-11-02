#include <stdlib.h>
#include <stdio.h>
/** 
 *main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int i=48, k=48 , j=48 ,p=48;
        while (i<58)
        {

        putchar(i);
        putchar(k);
        putchar(32);
        putchar(j);
        putchar(p);

        putchar(44);
        putchar(32);

        p++;
        if (p==58)
        {
        p=p-10;

        j++;
        }
        if (j==58)
        {
        j =j-10;
        k++;
        }
        if (k==58)
        {
        k=k-10;
        i=i+1;
        }
        }
        putchar(10);
return (0);
}
