#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Entry point of the program.
 *
 * Description: adds two numbers.
 *@n1: num 1
 *@n2:num 2
 * Return: the sum.
 */
 
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, max_len;
    int *num1, *num2, *sum; 

    int j, i, k;
 
    
    len1 = strlen(n1);
    len2 = strlen(n2);
    max_len = (len1 > len2) ? len1 : len2;

   

    num1 = (int *)calloc(max_len + 1, sizeof(int));
    num2 = (int *)calloc(max_len + 1, sizeof(int));
    sum = (int *)calloc(max_len + 2, sizeof(int)); 


/*Conversion of n1 and n2 to integer arrays*/
  for(i = len1 - 1, j = 0; i >= 0; i--, j++)
    {
        num1[j] = n1[i] - '0';
    }
    
    for(i = len2 - 1, j = 0; i >= 0; i--, j++)
    {
        num2[j] = n2[i] - '0';
    }

/*Addition of num1 and num2, handling carries*/
    for(i = 0; i < max_len; i++)
    {
        sum[i] = num1[i] + num2[i];
        
        if(sum[i] > 9)
        {
            sum[i] -= 10;
            sum[i+1]++;
        }
    }
/*Copying digits to the result string*/
     for(k = i, j = 0; k >= 0; k--, j++)
    {
        r[j] = sum[k] + '0';
    }
    
    r[j] = '\0'; 


    if (max_len > size_r )
           return (0);

    return r;
}
