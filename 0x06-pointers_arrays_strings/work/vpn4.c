#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#define NUM_STRINGS 71

int main(void) 
{
    int i;
    int k = 0;
    char *s;
    char *str[NUM_STRINGS] = {
        "DIMITAR.PETKOV",
        "DIMITAR.TSVETKOV",
        "DIMKA.IVANOVA",
        "DINKO.STEFANOV",
        "DIYAN.PETROV",
        "DONKA.TERZIEVA",
        "ELENA.PENCHEVA",
        "EMILIYA.KEHAYOVA",
        "ERDINCH.SELIM",
        "GENADI.PETROV",
        "GERGANA.KOEVA",
        "GERGANA.STANCHEVA",
        "GERGANA.TODOROVA",
        "YULIY.GRIGOROV",
        "HALIBRYAM.HALIBRYAM",
        "HALIME.SHABAN",
        "HRISTINA.GENEVA",
        "HRISTO.RUSEV",
        "HURIE.BEYSIM",
        "ILHAN.ISMAILOV",
        "INNA.HRANISLAVOVA",
        "ISRAFIL.MEHMED",
        "IVAN.DIMCHEV",
        "IVAN.TOSHKOV",
        "KAMELIYA.ZHIKOVA",
        "JAROSLAW.KNOPIK",
        "KRISTIAN.KRASTEV",
        "MAGDA.TODOROVA",
        "VESELINA.MARINOVA",
        "METIN.ISMAIL",
        "MIROSLAV.ANDREEV",
        "MIROSLAV.SHILOV",
        "MOMCHIL.GEORGIEV",
        "NADRIE.TOPCHU",
        "NELI.STOYANOVA",
        "NESLYAN.LATIFOVA",
        "NEVRIE.YUMER",
        "NEZHDA.AHMED",
        "NIKOLAY.ANGELOV",
        "NIKOLAY.ATANASOV",
        "NIKOLAY.GROZDEV",
        "NIKOLAY.KOEV",
        "NURTIN.KARAMEHMED",
        "NESLYAN.LATIFOVA",
        "PLAMENA.IVANOVA",
        "RABIE.ADEM",
        "RADKA.TODOROVA",
        "RALITSA.MOMCHEVA",
        "REDZHEB.BOSHNAK",
        "IVAN.SABEV",
        "SABKA.ZLATANOVA",
        "SEVDIYE.SALIMOVA",
        "SEVGINAR.KARAMEHMED",
        "SEZAI.YUMERCHAUSH",
        "SHENAY.MUSTAFA",
        "SILVIYA.STANCHEVA",
        "MARIYANA.SIMEONOVA",
        "SONYA.BALEVA",
        "SOTIR.KOSTOV",
        "STEFKA.IVANOVA",
        "STEFANI.NIKOLOVA",
        "TANER.MUTLU",
        "TANER.EREDZHEB",
        "TEODOR.GOSPODINOV",
        "TEODOR.TODOROV",
        "TODOR.NIKOLOV",
        "TONYA.MINKOVA",
        "VESELIN.KOLEV",
        "VESELIN.MILEV",
        "VLADIMIR.VALEV",
        "ZHIVKO.MINCHEV"
    };
    for (i = 0 , i < 71; i++)
    { 
    while (str[i][k] != '\0')

    {
    if (str[i][k] == '.')
    {
    s = _strncat(s, str[i][k+1], 1);
    s = _strncat(s, str[i][k+2], 1);
    }
    
     k++;
    }
    }
    return 0;
}
