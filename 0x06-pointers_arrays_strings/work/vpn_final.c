#include <stdlib.h>
#include <stdio.h>
#include <string.h> // Include string.h for strlen function
#define NUM_STRINGS 71

// Function to convert a string to uppercase
char *string_toupper(const char *str) {
    int i, k, l, m, o;
    // Allocate memory for the modified string
    char *result = malloc(strlen(str) + 1);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Convert characters to uppercase
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 32; // Convert lowercase to uppercase
        } else {
            result[i] = str[i]; // Copy non-lowercase characters unchanged
        }
    }
    result[i] = '\0'; // Null-terminate the string

    return result;
}


 // Function to convert a string to lowercase
    char *string_lower(const char *str)
     {
        int i, k, l, m, o;
    // Allocate memory for the modified string
    char *result = malloc(strlen(str) + 1);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Convert characters to lowercase
    
    for (i = 0; str[i] != '\0'; i++) 
    {
        int i, k, l, m, o;
        if (str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] + 32; // Convert  uppercase to lowercase 
        } else {
            result[i] = str[i]; // Copy non-uppercase characters unchanged
        }
    }
    result[i] = '\0'; // Null-terminate the string

    return result;
    }
//********************************************************************************************************************


int main(void) {
    int i, k, l, m, o;
    char *s;
    char *s1;
    char *s2;
    char *s3;
    char *s4;
    char *a1[] ={};
    char *a2[] ={};
    char *a3[] ={};
    char *a4[] ={};
    char *a5[] ={};

    
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
    for (i = 0; i < NUM_STRINGS; i++)
     {
        s = string_toupper(str[i]);
        a1[i] = s;
         printf("%s \n", a1[i]);
        free(s); // Free memory allocated for each modified string
     }

        for (i = 0; i < NUM_STRINGS; i++) 
        {
        s = malloc(3 * sizeof(char)); // Allocate memory for 2 characters + null terminator
        if (s == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1; // Return non-zero to indicate failure
        }
        s[0] = a1[i][0];
        s[1] = a1[i][1];
        s[2] = '\0'; // Null-terminate the string
        a2[i] = s;
         printf("%s \n", a2[i]);
        free(s); // Free allocated memory 
        }


     for (i = 0; i < NUM_STRINGS; i++)
      {
        s = string_lower(str[i]);
        a3[i] = s;
         printf("%s \n", a3[i]);
        free(s); // Free memory allocated for each modified string
      }
    
     for (int i = 0; i < NUM_STRINGS; i++) 
       {
        // Allocate memory for the concatenated string
        size_t len = strlen(a3[i]);
        char *concatenated = malloc((len + 1) * sizeof(char)); // Add 1 for null terminator
        if (concatenated == NULL) 
        {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }

        // Initialize concatenated string to empty
        concatenated[0] = '\0';

        // Concatenate characters after '.'
        for (size_t j = 0; j < len; j++) 
        {
            if (a3[i][j] == '.') {
                // Check if there are at least two characters after '.'
                if (j + 2 < len) {
                    strncat(concatenated, &a3[i][j], 1);
                    strncat(concatenated, &a3[i][j + 1], 1);
                    strncat(concatenated, &a3[i][j + 2], 1);
                }
            }
        }

        // Print the concatenated string
         a4[i] = concatenated;
 printf("%s \n", a4[i]);
        // Free memory for concatenated string
        free(concatenated);
        }

    for(i; i < NUM_STRINGS; i++)
    { 
size_t max_length = strlen(a3[i]);
  a5[i] = strncat(a2[i], a3[i], max_length);
   printf("%s \n", a5[i]);

    }
   return (0);
}