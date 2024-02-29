 #include <stdlib.h>
#include <stdio.h>
#include <string.h> 
 
 
 char *string_lower(const char *str) {
    // Allocate memory for the modified string
    char *result = malloc(strlen(str) + 1);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Convert characters to lowercase
    
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] + 32; // Convert  uppercase to lowercase 
        } else {
            result[i] = str[i]; // Copy non-uppercase characters unchanged
        }
    }
    result[i] = '\0'; // Null-terminate the string

    return result;
    }
