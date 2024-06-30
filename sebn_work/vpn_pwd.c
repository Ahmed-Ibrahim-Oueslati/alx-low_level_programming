#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* main - Entry point of the program.
*
* Description: Prints a string to the console.
*
* Return: Always 0 (success).
*/
char *_pmaking(char *list)

{
char *pwd;
int i;



/* Allocate memory for pwd */
pwd = (char *)malloc(strlen(list) + 1); // +1 for the null terminator '\0'
if (pwd == NULL)
{
printf("Memory allocation failed.\n");
return NULL;
}

if ( list[0] >= 'a'   &&  list[0] <= 'z')


{

pwd[0] = list[0] - 32 ;
}


else
pwd[0] = list[0];


if (pwd[0] == 'I' || pwd[0] == 'O' )

{
pwd[0] = 'T';
}

if ( list[1] >= 'a'  &&  list[1] <= 'z')


{
pwd[1] = list[1] - 32 ;
}
else
pwd[1] = list[1];



if (pwd[1] == 'I' || pwd[1] == 'O' )

{
pwd[1] = 'T';
}


pwd[2] = '.';


for ( i = 0; list[i] != '\0'; i++ )

{
if (list[i] == '.')


{
if ( list[i+1] >= 'A'   &&  list[i+1] <= 'Z')


{

pwd[3] = list[i+1] + 32 ;
}
else
pwd[3] = list[i+1];

if (pwd[3] == 'l')

{
pwd[3] = 'u';
}


if ( list[i+2] >= 'A'   &&  list[i+2] <= 'Z')


{

pwd[4] = list[i+2] + 32;
}
else
pwd[4] = list[i+2];

if (pwd[4] == 'l')

{
pwd[4] = 'u';
}


}
}

pwd[i] = '\0';
/* printf("the user name is : %s \n the pwd is %s \n " , list, pwd); */


return (pwd);

}
