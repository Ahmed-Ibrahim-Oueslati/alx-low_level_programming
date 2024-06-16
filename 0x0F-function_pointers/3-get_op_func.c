#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func- Entry point of the program.
 *
 * Description:  selects the correct function to perform the operation
 *@s: pointer to characther 
 * Return: pointer to the func
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (*(ops[i].op) == *s)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
