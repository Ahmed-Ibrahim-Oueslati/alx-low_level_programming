#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 256

void extract_and_print_fields(const char *filename) {
    FILE *file;
    char buffer[MAX_STRING_LENGTH];
    char userGroup[MAX_STRING_LENGTH] = "";
    char username[MAX_STRING_LENGTH] = "";
    int newGroup = 0; // Flag to indicate a new group

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Read the file line by line
    while (fgets(buffer, MAX_STRING_LENGTH, file) != NULL) {
        char *token;

        // Detect the start of a new user group object
        if (strstr(buffer, "user group object") != NULL) {
            // Extract the user group name
            if ((token = strstr(buffer, "user group ")) != NULL) {
                token += strlen("user group ");
                strcpy(userGroup, token);
                userGroup[strcspn(userGroup, "\n")] = '\0';
                newGroup = 1; // Set the flag to indicate a new group
            }
        }

        // Check and extract the username
        if (strstr(buffer, "user object") != NULL && userGroup[0] != '\0') {
            if ((token = strstr(buffer, "user object ")) != NULL) {
                token += strlen("user object ");
                strcpy(username, token);
                username[strcspn(username, "\n")] = '\0';

                if (newGroup) {
                    // Print the group name followed by a newline
                    printf("%s\n", userGroup);
                    newGroup = 0; // Reset the flag
                }

                // Print the username
                printf("%s\n", username);
            }
        }

        // Print 5 empty lines between groups
        if (newGroup && strstr(buffer, "user group object") != NULL) {
            for (int i = 0; i < 5; i++) {
                printf("\n");
            }
        }
    }

    // Close the file
    fclose(file);
}

int main() {
    // File containing the data to extract
    const char *filename = "extract_hat2";

    // Extract fields and print in the specified format
    extract_and_print_fields(filename);

    return 0;
}