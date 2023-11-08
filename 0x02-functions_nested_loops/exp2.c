#include <stdlib.h>
#include "main.h"

void print_to_98(int n)
{
    int b , s, i;
    char buffer[20];

    if (n <= 98)
    {
        s = n ;
        {
            for (;s<=98;s++)
            {
                int temp = s;
                int digits = 0;

                
                do {
                    temp /= 10;
                    digits++;
                } while(temp != 0);

                temp = s;

                
                for (int i = digits - 1; i >= 0; i--)
                {
                    buffer[i] = '0' + (temp % 10);
                    temp /= 10;
                }

                
               fwrite(1, buffer, digits);

                
                if (s != 98) {
                    _putchar(',');
                    _putchar(' ');
                }
            }
        }
    }

    if (n >= 98)
    {
	    
        b = n ;
        {
            for (;b>=98;b--)
            {
                int temp = b;
                int digits = 0;

                do {
                    temp /= 10;
                    digits++;
                } while(temp != 0);

                temp = b;

                for ( i = digits - 1; i >= 0; i--)
                {
                    buffer[i] = '0' + (temp % 10);
                    temp /= 10;
                }

                fwrite(1, buffer, digits);

                if (b != 98) {
                    _putchar(',');
                    _putchar(' ');
                }
            }
        }
    }
    _putchar(10); 
}

