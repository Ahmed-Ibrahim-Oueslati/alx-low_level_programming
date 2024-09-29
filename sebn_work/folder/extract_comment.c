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

char *extract_comment(const char *filename, const char *user) {
    FILE *file;
    char buffer[MAX_STRING_LENGTH];
    char *comment = NULL;

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Process each line to find the comment for the user
    while (fgets(buffer, MAX_STRING_LENGTH, file) != NULL) {
        if (strstr(buffer, "user object") != NULL) {
            char *token = strstr(buffer, user);
            if (token != NULL) {
                // Move to the next line to find the comment
                while (fgets(buffer, MAX_STRING_LENGTH, file) != NULL) {
                    if (strstr(buffer, "comment") != NULL) {
                        char *start = strchr(buffer, '=');
                        if (start != NULL) {
                            start++; // Move past '='
                            while (*start == ' ') start++; // Skip leading spaces
                            comment = malloc(strlen(start) + 1);
                            if (comment == NULL) {
                                perror("Error allocating memory for comment");
                                fclose(file);
                                exit(EXIT_FAILURE);
                            }
                            strcpy(comment, start);
                            break;
                        }
                    }
                }
                break;
            }
        }
    }

    // Close the file
    fclose(file);
    return comment;
}

int main() {
    char **users;
    int size_users;
    int i;
    char *comment;

    // Read users from not_found file
    read_file_to_array("not_found", &users, &size_users);

    // Process each user to extract the corresponding comment
    for (i = 0; i < size_users; i++) {
        printf("user : %s\n", users[i]);
        comment = extract_comment("text_file", users[i]);
        if (comment != NULL) {
            printf("comment : %s\n", comment);
            free(comment);
        } else {
            printf("comment : Not found\n");
        }
    }

    // Free allocated memory for users
    for (i = 0; i < size_users; i++) {
        free(users[i]);
    }
    free(users);

    return 0;
}
