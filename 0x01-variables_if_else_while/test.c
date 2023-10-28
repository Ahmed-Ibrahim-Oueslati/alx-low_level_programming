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
int i=48, k=48 , j=48 ,p=48;              
        while (i<58 && j<58 )
	{
	while(k<58 && p<58)
	{
	
	
	putchar(i);
	putchar(k);
	putchar(32);
	putchar(j);
	putchar(p);
	
	putchar(44);
	putchar(32);
	
	
	
	k++;
	p++;
	}
	k=k-10;
	p=p-10;
	i=i+1;
	j++;
	}
	putchar(10);	
return (0);   
}
