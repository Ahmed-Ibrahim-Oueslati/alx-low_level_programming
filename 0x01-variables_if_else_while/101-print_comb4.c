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
int i=48, k=48,j=48 ;              
        while (i<56 )
	{
	while(k<57)
	{
	 if (k!=i && k>i)
	 {
	while (j<58)
	{
	if (j!=k && j>k)
	{
	putchar(i);
	putchar(k);
	putchar(j);
	if (i!=55)
	{
	putchar(44);
	putchar(32);
	}
	}
	j++;
	}
	 }
	k++;
	
	}
	i=i+1;
	k = k-10;
	j = j-10;
	
	}
	putchar(10);	
return (0);   
}

