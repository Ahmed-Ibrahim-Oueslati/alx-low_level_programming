#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Entry point of the program.
 *
 * Description: Prints every minutes of the day.
 *
 * Return: nothing (void).
 */
void jack_bauer(void)
{
int i,j,k,l;
for (i = 0; i < 3; i++){
for (j = 0; j < 4; j++){
for (k = 0; k < 6; k++){
for (l = 0; l < 10; l++){
_putchar(i);
_putchar(j);
_putchar(58);
_putchar(k);
_putchar(l);
}
}
}
}
}
