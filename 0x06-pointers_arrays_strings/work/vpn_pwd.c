#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#define NUM_STRINGS 71
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int i;
char *s;
char  *str[NUM_STRINGS] ={"Dimitar.Petkov","Dimitar.Tsvetkov","dimka.ivanova","Dinko.Stefanov","Diyan.Petrov","Donka.Terzieva","Elena.Pencheva","Emiliya.Kehayova","Erdinch.Selim","Genadi.Petrov",
        "Gergana.Koeva","Gergana.Stancheva","Gergana.Todorova","Yuliy.Grigorov","Halibryam.Halibryam","Halime.Shaban","Hristina.Geneva","Hristo.Rusev","Hurie.Beysim","Ilhan.Ismailov",
        "Inna.Hranislavova","Israfil.Mehmed","Ivan.Dimchev","Ivan.Toshkov","Kameliya.Zhikova","Jaroslaw.Knopik","Kristian.Krastev","Magda.Todorova","Veselina.Marinova","Metin.Ismail",
        "Miroslav.Andreev","Miroslav.Shilov","Momchil.Georgiev","Nadrie.Topchu","Neli.Stoyanova","Neslyan.Latifova","Nevrie.Yumer","Nezhda.Ahmed","Nikolay.Angelov","Nikolay.Atanasov",
        "Nikolay.Grozdev","Nikolay.Koev","Nurtin.Karamehmed","Neslyan.Latifova","Plamena.Ivanova","Rabie.Adem","Radka.Todorova","Ralitsa.Momcheva","Redzheb.Boshnak","Ivan.Sabev",
        "Sabka.Zlatanova","Sevdiye.Salimova","Sevginar.Karamehmed","Sezai.Yumerchaush","Shenay.Mustafa","Silviya.Stancheva","Mariyana.Simeonova","Sonya.Baleva","Sotir.Kostov",
        "Stefka.Ivanova","Stefani.Nikolova","Taner.Mutlu","Taner.Eredzheb","Teodor.Gospodinov","Teodor.Todorov","Todor.Nikolov","Tonya.Minkova","Veselin.Kolev","Veselin.Milev",
        "Vladimir.Valev","Zhivko.Minchev"};

for (i = 0; i < NUM_STRINGS; i++)
{
s = string_toupper(str[i]);
printf("%s \n", s);
}
return (0);
}
