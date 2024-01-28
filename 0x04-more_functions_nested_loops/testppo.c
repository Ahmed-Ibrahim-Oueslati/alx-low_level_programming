#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(void)
{ 
int c = 49;
int a = 10;
write(1, &c, 1);
write(1, &a, 1);  
}
