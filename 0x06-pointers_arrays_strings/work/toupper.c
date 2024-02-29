#include <stdlib.h>
#include <stdio.h>
#include <string.h> // Include string.h for strlen function

// Function to convert a string to uppercase
char *string_toupper(const char *str) {
    // Allocate memory for the modified string
    char *result = malloc(strlen(str) + 1);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Convert characters to uppercase
    int i;
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