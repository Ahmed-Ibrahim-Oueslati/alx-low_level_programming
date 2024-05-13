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

char *arr[50][1]= {"Alisa.Abagiu", "Andrei.Abagiu", "adrian.baloi", "Adriana.Gheorghe", "Gheorghe.Alba", "albert.vladulescu", "Alexandra.Baiusz", "Alexandra.Bala", "alexandru.miulescu", "Ion.Alfiri", "Alina.Alesandru", "Alin.Olariu", "alina-camelia.sfetcu", "Ana.Adamescu", "Ana.Sandru", "Ana.Tunsoiu", "Anca.Taizs", "Andreea.Bostioca", "andreea.juncan", "Andrea.Rabusanu", "Anisoara.Panutescu", "Petrisor.Arbanasi", "Adelin.Asan", "Cristina.Asan", "Augustin.Sramec", "Angelo.Baditoniu", "Ileana.Banda", "Ilie.Banda", "Adriana.Barbulescu", "Angelica.Betiu", "Laura.Bobocea", "Luana.Boca", "Alin.Boeti", "Costin.Boeti", "adrian.botezatu", "daniel.braileanu", "costel.bruca", "Ionela.Calotescu", "Eugen.Caragioiu", "Mihaela.Cilinca", "Daniela.Cioaba", "Veronica.Cioroianu", "ciprian.vijaica", "Claudiu.Ciuhurezu", "Alin.Clenciu", "petre.cojocaru", "Cornel.Mardari", "cristina.popescu", "Cosmin.Babicean", "Cristinel.Tanasie"};

for (i = 0; i < 50; i++)
{
list1 = *arr[i];
 pwd1 = _pmaking(list1);
 printf("%s\n " , pwd1);
}
return (0);
}
