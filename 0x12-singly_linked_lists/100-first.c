#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void first(void)__attribute__((constructor));
/**
 * first - print sentence before the main
 * function is excuted before the main
*/
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
