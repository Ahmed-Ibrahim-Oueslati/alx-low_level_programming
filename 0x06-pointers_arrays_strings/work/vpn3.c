#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#define NUM_STRINGS 71

int main(void) {
    int i;
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

    // Concatenate and print the first two characters of each string
    for (i = 0; i < NUM_STRINGS; i++) {
        s = malloc(3 * sizeof(char)); // Allocate memory for 2 characters + null terminator
        if (s == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1; // Return non-zero to indicate failure
        }
        s[0] = str[i][0];
        s[1] = str[i][1];
        s[2] = '\0'; // Null-terminate the string
        printf("%s\n", s);
        free(s); // Free allocated memory
    }

    return 0;
}
