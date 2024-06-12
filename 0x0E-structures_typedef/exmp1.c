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
struct user 
{
char *name;
char *email;
int age;
};

int main(void)
{
struct user user1;
struct user *p;
#if 0
printf("give me your name ?\n");
user1.name = malloc(18);
scanf("%s", user1.name);
#endif 
user1.name = "bou7mid";
#if 0
printf("give me your email ?\n");
user1.email = malloc(18);
scanf("%s", user1.email);
#endif
user1.email = "oueslatiahmed22";
/*
printf("give me your age ?\n");
user1.age = malloc(18);
scanf("%d", user1.age);
*/
user1.age = 18;
printf("%s\n", user1.name);
printf("%s\n", user1.email);
printf("%d\n", user1.age);
printf("%s\n %s\n %d\n", user1.name, user1.email, user1.age);


p = &user1;
(*p).name = "kamel";
p->email = "chahir";
printf("%s\n%s\n", (*p).name, (*p).email);

return (0);
}
