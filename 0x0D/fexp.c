#include <stdlib.h>
#include "main.h"
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
long unsigned int x;
x = 9999999999;
#define arm x
#define part(p) ((p) / 1000) * 0.5
#define ver 5
# if 0
printf("arm are : %ld \n", arm);
printf("my part in arm is : %lf \n", part(arm));

#if ver == 1
printf("hello ver1 \n");

#elif ver == 2
printf("not  ver2 \n");

#elif  ver == 3
printf("not  ver3 \n");
#else
     #error "please give ver nb"
#endif

printf("FILE %s\n", __FILE__);
printf("FILE %s\n", __DATE__);
printf("FILE %s\n", __TIME__);
#endif
printf("FILE %d\n", __LINE__);

return (0);
}
