//Function Pointers in C/C++
#include<stdio.h>
int Add(int a,int b)
{
return a+b;
}
int main()
{
int c;
int (*p) (int, int);// don't forget the type of the return 
p = &Add; // p = Add; means the same
c = (*p) (2,3); //de-referencing and executing the function. p(2,3) means the same 
printf("%d\n",c);
}