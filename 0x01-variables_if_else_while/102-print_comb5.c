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
int i=48, k=48,j=48, p=48;              
        while (i<55 )
	{
	while(k<56)
	{
	 if (k!=i && k>i)
	 {
	while (j<57)
	{
	if (j!=k && j>k)
	{
	while (p<58)
	{
	if (p!=j && p >j)
	
	{
	putchar(i);
	putchar(k);
	putchar(32);
	putchar(j);
	putchar(p);
	if (i!=55)
	{
	putchar(44);
	putchar(32);
	}
	}
	p++;
	}
	}
	j++;
	p =p-10;
	}
	 }
	k++;
	j = j -10;
	}
	i=i+1;
	k = k-10;
	
	
	}
	putchar(10);	
return (0);   
}

