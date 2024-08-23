#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 256

void extract_and_print_fields(const char *filename) {
    FILE *file;
    char buffer[MAX_STRING_LENGTH];
    char username[MAX_STRING_LENGTH] = "";
    char realname[MAX_STRING_LENGTH] = "";
    char comment[MAX_STRING_LENGTH] = "";

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Read the file line by line
    while (fgets(buffer, MAX_STRING_LENGTH, file) != NULL) {
        char *token;

        // Detect the start of a new user object
        if (strstr(buffer, "user object") != NULL) {
            // If we have already extracted data, print it
            if (username[0] != '\0' || realname[0] != '\0' || comment[0] != '\0') {
                printf("username = %s#real name (realname) = %s#comment (comment) = %s\n", username, realname, comment);
            }

            // Reset fields for the new user object
            username[0] = '\0';
            realname[0] = '\0';
            comment[0] = '\0';
        }

        // Check and extract the username
        if ((token = strstr(buffer, "username (name) = ")) != NULL) {
            token += strlen("username (name) = ");
            strcpy(username, token);
            // Remove newline character
            username[strcspn(username, "\n")] = '\0';
        }
        // Check and extract the real name
        else if ((token = strstr(buffer, "real name (realname) = ")) != NULL) {
            token += strlen("real name (realname) = ");
            strcpy(realname, token);
            // Remove newline character
            realname[strcspn(realname, "\n")] = '\0';
        }
        // Check and extract the comment
        else if ((token = strstr(buffer, "comment (comment) = ")) != NULL) {
            token += strlen("comment (comment) = ");
            strcpy(comment, token);
            // Remove newline character
            comment[strcspn(comment, "\n")] = '\0';
        }
    }

    // Print the last extracted entry if there is any
    if (username[0] != '\0' || realname[0] != '\0' || comment[0] != '\0') {
        printf("username = %s#real name (realname) = %s#comment (comment) = %s\n", username, realname, comment);
    }

    // Close the file
    fclose(file);
}

int main() {
    // File containing the data to extract
    const char *filename = "text_file";

    // Extract fields and print in the specified format
    extract_and_print_fields(filename);

    return 0;
}
