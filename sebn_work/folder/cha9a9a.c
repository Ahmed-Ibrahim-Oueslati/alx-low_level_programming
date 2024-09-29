#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

void read_file_to_array(const char *filename, char ***array, int *size) {
    FILE *file;
    char buffer[MAX_STRING_LENGTH];
    int sum = 0;

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Read the size of the array
    if (fscanf(file, "%d\n", size) != 1) {
        perror("Error reading size from file");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    // Allocate memory for the array of string pointers
    *array = malloc(*size * sizeof(char *));
    if (*array == NULL) {
        perror("Error allocating memory");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    // Read each string from the file and calculate the sum
    for (int i = 0; i < *size; i++) {
        if (fgets(buffer, MAX_STRING_LENGTH, file) == NULL) {
            perror("Error reading string from file");
            // Free previously allocated memory before returning
            for (int j = 0; j < i; j++) {
                free((*array)[j]);
            }
            free(*array);
            fclose(file);
            exit(EXIT_FAILURE);
        }
        // Remove newline character if present
        buffer[strcspn(buffer, "\n")] = '\0';

        // Allocate memory for the string and copy the buffer
        (*array)[i] = malloc((strlen(buffer) + 1) * sizeof(char));
        if ((*array)[i] == NULL) {
            perror("Error allocating memory");
            // Free previously allocated memory before returning
            for (int j = 0; j < i; j++) {
                free((*array)[j]);
            }
            free(*array);
            fclose(file);
            exit(EXIT_FAILURE);
        }
        strcpy((*array)[i], buffer);

        // Convert the string to an integer and add to sum
        sum += atoi(buffer);
    }

    // Print the sum of the integers
    printf("The sum of the integers is: %d\n", sum);

    // Close the file
    fclose(file);
}

int main() {
    char **array;
    int size;
    
    read_file_to_array("lista", &array, &size);
    
    // Free the allocated memory for the array
    for (int i = 0; i < size; i++) {
        free(array[i]);
    }
    free(array);
    
    return 0;
}
