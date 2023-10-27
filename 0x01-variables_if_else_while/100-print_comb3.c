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
int i=48, k=48 ;              
        while (i<57 )
	{
	while(k<58)
	{
	if (k!=i && k>i)
	{
	putchar(i);
	putchar(k);
	if (i!=8)
	{
	putchar(44);
	putchar(32);
	}
	
	}
	k++;
	}
	k=k-10;
	i=i+1;
	
	}
	putchar(10);	
return (0);   
}
