#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM_STRINGS 71

int main(void) {
    char *str[NUM_STRINGS] = {"Dimitar.Petkov","Dimitar.Tsvetkov","dimka.ivanova","Dinko.Stefanov","Diyan.Petrov","Donka.Terzieva","Elena.Pencheva","Emiliya.Kehayova","Erdinch.Selim","Genadi.Petrov",
        "Gergana.Koeva","Gergana.Stancheva","Gergana.Todorova","Yuliy.Grigorov","Halibryam.Halibryam","Halime.Shaban","Hristina.Geneva","Hristo.Rusev","Hurie.Beysim","Ilhan.Ismailov",
        "Inna.Hranislavova","Israfil.Mehmed","Ivan.Dimchev","Ivan.Toshkov","Kameliya.Zhikova","Jaroslaw.Knopik","Kristian.Krastev","Magda.Todorova","Veselina.Marinova","Metin.Ismail",
        "Miroslav.Andreev","Miroslav.Shilov","Momchil.Georgiev","Nadrie.Topchu","Neli.Stoyanova","Neslyan.Latifova","Nevrie.Yumer","Nezhda.Ahmed","Nikolay.Angelov","Nikolay.Atanasov",
        "Nikolay.Grozdev","Nikolay.Koev","Nurtin.Karamehmed","Neslyan.Latifova","Plamena.Ivanova","Rabie.Adem","Radka.Todorova","Ralitsa.Momcheva","Redzheb.Boshnak","Ivan.Sabev",
        "Sabka.Zlatanova","Sevdiye.Salimova","Sevginar.Karamehmed","Sezai.Yumerchaush","Shenay.Mustafa","Silviya.Stancheva","Mariyana.Simeonova","Sonya.Baleva","Sotir.Kostov",
        "Stefka.Ivanova","Stefani.Nikolova","Taner.Mutlu","Taner.Eredzheb","Teodor.Gospodinov","Teodor.Todorov","Todor.Nikolov","Tonya.Minkova","Veselin.Kolev","Veselin.Milev",
        "Vladimir.Valev","Zhivko.Minchev"
        // Your string array initialization...
    };

    for (int i = 0; i < NUM_STRINGS; i++) {
        // Allocate memory for the concatenated string
        size_t len = strlen(str[i]);
        char *concatenated = malloc((len + 1) * sizeof(char)); // Add 1 for null terminator
        if (concatenated == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }

        // Initialize concatenated string to empty
        concatenated[0] = '\0';

        // Concatenate characters after '.'
        for (size_t j = 0; j < len; j++) {
            if (str[i][j] == '.') {
                // Check if there are at least two characters after '.'
                if (j + 2 < len) {
                    strncat(concatenated, &str[i][j], 1);
                    strncat(concatenated, &str[i][j + 1], 1);
                    strncat(concatenated, &str[i][j + 2], 1);
                }
            }
        }

        // Print the concatenated string
        printf("%s\n", concatenated);

        // Free memory for concatenated string
        free(concatenated);
    }

    return 0;
}

