#include "./main.h"
void print_alphabet(void)
{

int i=97 ;
        while (i<123)
        {
       _putchar(i);
        i++;
        }
        _putchar(10);
}
void print_alphabet_x10(void)
{
	int i = 0;
	while (i<10)
	{
		 print_alphabet();
		i++;
	}
}
