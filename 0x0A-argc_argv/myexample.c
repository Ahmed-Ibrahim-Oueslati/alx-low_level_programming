#include <stdlib.h>
#include <stdio.h>

int main (int argc , char **argv)
{
    int i;
    i = 0;
    printf("argc = %d\n", argc);

    while (i < argc)
    {
    printf("argv [%d] = %s \n", i, *argv++); 
    i++;
    }

    return 0;
}