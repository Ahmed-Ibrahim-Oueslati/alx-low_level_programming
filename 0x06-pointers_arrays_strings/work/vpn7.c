#include <stdlib.h>
#include <stdio.h>
#include <string.h> // Include string.h for strlen function

// Function to convert a string to uppercase
char *string_lower(const char *str) {
    // Allocate memory for the modified string
    char *result = malloc(strlen(str) + 1);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Convert characters to uppercase
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] + 32; // Convert lowercase to uppercase
        } else {
            result[i] = str[i]; // Copy non-lowercase characters unchanged
        }
    }
    result[i] = '\0'; // Null-terminate the string

    return result;
}

#define NUM_STRINGS 71

int main(void) {
    int i;
    char *s;
    char *str[NUM_STRINGS] = {
        "Dimitar.Petkov","Dimitar.Tsvetkov","dimka.ivanova","Dinko.Stefanov","Diyan.Petrov","Donka.Terzieva","Elena.Pencheva","Emiliya.Kehayova","Erdinch.Selim","Genadi.Petrov",
        "Gergana.Koeva","Gergana.Stancheva","Gergana.Todorova","Yuliy.Grigorov","Halibryam.Halibryam","Halime.Shaban","Hristina.Geneva","Hristo.Rusev","Hurie.Beysim","Ilhan.Ismailov",
        "Inna.Hranislavova","Israfil.Mehmed","Ivan.Dimchev","Ivan.Toshkov","Kameliya.Zhikova","Jaroslaw.Knopik","Kristian.Krastev","Magda.Todorova","Veselina.Marinova","Metin.Ismail",
        "Miroslav.Andreev","Miroslav.Shilov","Momchil.Georgiev","Nadrie.Topchu","Neli.Stoyanova","Neslyan.Latifova","Nevrie.Yumer","Nezhda.Ahmed","Nikolay.Angelov","Nikolay.Atanasov",
        "Nikolay.Grozdev","Nikolay.Koev","Nurtin.Karamehmed","Neslyan.Latifova","Plamena.Ivanova","Rabie.Adem","Radka.Todorova","Ralitsa.Momcheva","Redzheb.Boshnak","Ivan.Sabev",
        "Sabka.Zlatanova","Sevdiye.Salimova","Sevginar.Karamehmed","Sezai.Yumerchaush","Shenay.Mustafa","Silviya.Stancheva","Mariyana.Simeonova","Sonya.Baleva","Sotir.Kostov",
        "Stefka.Ivanova","Stefani.Nikolova","Taner.Mutlu","Taner.Eredzheb","Teodor.Gospodinov","Teodor.Todorov","Todor.Nikolov","Tonya.Minkova","Veselin.Kolev","Veselin.Milev",
        "Vladimir.Valev","Zhivko.Minchev"
    };

    // Convert strings to uppercase and print them
    for (i = 0; i < NUM_STRINGS; i++) {
        s = string_lower(str[i]);
        printf("%s\n", s);
        free(s); // Free memory allocated for each modified string
    }

    return 0;
}
