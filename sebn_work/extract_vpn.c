#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

void read_file_to_array(const char *filename, char ***array, int *size) {
    FILE *file;
    char buffer[MAX_STRING_LENGTH];

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

    // Read each string from the file
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

        // Remove newline character from the string if present
        buffer[strcspn(buffer, "\n")] = '\0';

        // Allocate memory for the string and copy it from the buffer
        (*array)[i] = malloc(strlen(buffer) + 1);
        if ((*array)[i] == NULL) {
            perror("Error allocating memory for string");
            // Free previously allocated memory before returning
            for (int j = 0; j < i; j++) {
                free((*array)[j]);
            }
            free(*array);
            fclose(file);
            exit(EXIT_FAILURE);
        }
        strcpy((*array)[i], buffer);
    }

    // Close the file
    fclose(file);
}

int main() {
    char **list1, **list2;
    int size1;
    int i, j, p;
    p = 0;

    // Read list1.txt into list1 array
    read_file_to_array("china_firewall", &list1, &size1);

    // Allocate memory for list2 based on a reasonable assumption
    list2 = malloc(size1 * sizeof(char *));
    if (list2 == NULL) {
        perror("Error allocating memory for list2");
        // Free allocated memory for list1
        for (i = 0; i < size1; i++) {
            free(list1[i]);
        }
        free(list1);
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < size1; i++) {
        char *token = strtok(list1[i], " ");
        while (token != NULL) {
            if (strcmp(token, "(name)") == 0) {
                token = strtok(NULL, " ");
                if (token != NULL && strcmp(token, "=") == 0) {
                    token = strtok(NULL, " ");
                    if (token != NULL) {
                        list2[p] = malloc(strlen(token) + 1);
                        if (list2[p] == NULL) {
                            perror("Error allocating memory for list2 element");
                            // Free allocated memory
                            for (int k = 0; k < p; k++) {
                                free(list2[k]);
                            }
                            free(list2);
                            for (int k = 0; k < size1; k++) {
                                free(list1[k]);
                            }
                            free(list1);
                            exit(EXIT_FAILURE);
                        }
                        strcpy(list2[p], token);
                        p++;
                    }
                }
            }
            token = strtok(NULL, " ");
        }
    }

    // Print the contents of list2 for verification
    for (i = 0; i < p; i++) {
        printf("%s\n", list2[i]);
        free(list2[i]);
    }
    free(list2);

    // Free allocated memory for list1
    for (i = 0; i < size1; i++) {
        free(list1[i]);
    }
    free(list1);

    return 0;
}
