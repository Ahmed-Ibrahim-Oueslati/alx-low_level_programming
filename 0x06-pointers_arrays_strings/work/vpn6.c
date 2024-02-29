#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM_STRINGS 71

int main(void) {
    char *str[NUM_STRINGS] = {
        "dimitar.petkov",
        "dimitar.tsvetkov",
        "dimka.ivanova",
        "dinko.stefanov",
        "diyan.petrov",
        "donka.terzieva",
        "elena.pencheva",
        "emiliya.kehayova",
        "erdinch.selim",
        "genadi.petrov",
        "gergana.koeva",
        "gergana.stancheva",
        "gergana.todorova",
        "yuliy.grigorov",
        "halibryam.halibryam",
        "halime.shaban",
        "hristina.geneva",
        "hristo.rusev",
        "hurie.beysim",
        "ilhan.ismailov",
        "inna.hranislavova",
        "israfil.mehmed",
        "ivan.dimchev",
        "ivan.toshkov",
        "kameliya.zhikova",
        "jaroslaw.knopik",
        "kristian.krastev",
        "magda.todorova",
        "veselina.marinova",
        "metin.ismail",
        "miroslav.andreev",
        "miroslav.shilov",
        "momchil.georgiev",
        "nadrie.topchu",
        "neli.stoyanova",
        "neslyan.latifova",
        "nevrie.yumer",
        "nezhda.ahmed",
        "nikolay.angelov",
        "nikolay.atanasov",
        "nikolay.grozdev",
        "nikolay.koev",
        "nurtin.karamehmed",
        "neslyan.latifova",
        "plamena.ivanova",
        "rabie.adem",
        "radka.todorova",
        "ralitsa.momcheva",
        "redzheb.boshnak",
        "ivan.sabev",
        "sabka.zlatanova",
        "sevdiye.salimova",
        "sevginar.karamehmed",
        "sezai.yumerchaush",
        "shenay.mustafa",
        "silviya.stancheva",
        "mariyana.simeonova",
        "sonya.baleva",
        "sotir.kostov",
        "stefka.ivanova",
        "stefani.nikolova",
        "taner.mutlu",
        "taner.eredzheb",
        "teodor.gospodinov",
        "teodor.todorov",
        "todor.nikolov",
        "tonya.minkova",
        "veselin.kolev",
        "veselin.milev",
        "vladimir.valev",
        "zhivko.minchev"
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
                    // Add a comma delimiter if it's not the last string
                    
                        
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
