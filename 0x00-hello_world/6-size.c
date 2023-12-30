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
	int i; 
	float f; 
	char v; 
	long int li ; 
	long long int lli;
printf("Size of a char: %lu byte(s)\n",sizeof(v));
printf("Size of an int: %d  byte(s)\n",i);
printf("Size of a long int: %ld  byte(s)\n",li);
printf("Size of a long long int: %lld  byte(s)\n",lli);
printf("Size of a float: %f byte(s)\n",f);
return (0);
}
