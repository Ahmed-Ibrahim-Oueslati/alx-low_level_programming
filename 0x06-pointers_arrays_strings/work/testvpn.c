#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM_STRINGS 71

// Function to convert a string to uppercase
void string_toupper(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // Convert lowercase to uppercase
        }
    }
}

// Function to convert a string to lowercase
void string_lower(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // Convert uppercase to lowercase
        }
    }
}

int main(void) {
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
    for (int i = 0; i < NUM_STRINGS; i++) {
        string_toupper(str[i]);
        printf("%s\n", str[i]);
    }

    // Convert strings to lowercase and print them
    for (int i = 0; i < NUM_STRINGS; i++) {
        string_lower(str[i]);
        printf("%s\n", str[i]);
    }

    // Print XX.xx for each string
    for (int i = 0; i < NUM_STRINGS; i++) {
        printf("%c%c.%c%c\n", str[i][0], str[i][1], str[i][3], str[i][4]);
    }

    return 0;
}

