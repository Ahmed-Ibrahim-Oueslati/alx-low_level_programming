#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int i ;
char *pwd1;
char *list1;

char *arr[21][1]= {"Adil.Semrich", "Aziz.Guagua", "Aziz.Sahili", "Badr.Barakat", "Fatima.Hanfar", "jilali.hani", "Mohamed.ElIdrissi", "Rachid.Bchiri", "Saad.Begdouri", "Simohammed.Kjairi", "Yassin.Boulbene", "Yassin.Tamsamani", "Aziz.Souidi", "Aya.Elfares", "Charaf-eddine.Zellaj", "Hicham.Elaffaki", "Mohamed.Ibnelfaqyh", "Mohammed.Rhoddane", "Oum-elmouminine.Elmo", "Junichi.Kato", "Zhor.Chahir"};

for (i = 0; i < 21; i++)
{
list1 = *arr[i];
 pwd1 = _pmaking(list1);
 printf("%s\n " , pwd1);
}
return (0);
}
