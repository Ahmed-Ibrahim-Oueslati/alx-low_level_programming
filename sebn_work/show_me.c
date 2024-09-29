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

void compare_and_delete(char **list1, int *size1, char **list2, int *size2) {
    int i, j, k;

    // Compare and delete matching elements in list1
    for (i = 0; i < *size1; i++) {
        for (j = 0; j < *size2; j++) {
            if (strcmp(list1[i], list2[j]) == 0) {
                // Shift elements in list1 after the deleted element
                for (k = i; k < *size1 - 1; k++) {
                    list1[k] = list1[k + 1];
                }
                (*size1)--;
                i--; // Decrement i to avoid skipping an element
                break;
            }
        }
    }

    // Compare and delete matching elements in list2
    for (i = 0; i < *size2; i++) {
        for (j = 0; j < *size1; j++) {
            if (strcmp(list2[i], list1[j]) == 0) {
                // Shift elements in list2 after the deleted element
                for (k = i; k < *size2 - 1; k++) {
                    list2[k] = list2[k + 1];
                }
                (*size2)--;
                i--; // Decrement i to avoid skipping an element
                break;
            }
        }
    }
}

void print_list(char **list, int size, const char *message) {
    printf("%s:\n", message);
    for (int i = 0; i < size; i++) {
        printf("%s\n", list[i]);
    }
}

int main() {
    char **list1, **list2;
    int size1, size2;

    // Read list1.txt into list1 array
    read_file_to_array("list1", &list1, &size1);

    // Read list2.txt into list2 array
    read_file_to_array("list2", &list2, &size2);

    // Compare arrays and delete matching elements from both lists
    compare_and_delete(list1, &size1, list2, &size2);

    // Print the resulting lists with the desired format
    printf("The rest of list1 is:\n");
    print_list(list1, size1, "");
    printf("The rest of list2 is:\n");
    print_list(list2, size2, "");

    // Free allocated memory
    for (int i = 0; i < size1; i++) {
        free(list1[i]);
    }
    free(list1);

    for (int i = 0; i < size2; i++) {
        free(list2[i]);
    }
    free(list2);

    return 0;
}
