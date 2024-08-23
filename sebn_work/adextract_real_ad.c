#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 256

void extract_lines_for_usernames(const char *usernames_filename, const char *data_filename) {
    FILE *usernames_file, *data_file;
    char username[MAX_STRING_LENGTH];
    char data_line[MAX_STRING_LENGTH];
    int found;

    // Open the usernames file for reading
    usernames_file = fopen(usernames_filename, "r");
    if (usernames_file == NULL) {
        perror("Error opening usernames file");
        exit(EXIT_FAILURE);
    }

    // Open the data file for reading
    data_file = fopen(data_filename, "r");
    if (data_file == NULL) {
        perror("Error opening data file");
        fclose(usernames_file);
        exit(EXIT_FAILURE);
    }

    // Read each username from the usernames file
    while (fgets(username, MAX_STRING_LENGTH, usernames_file) != NULL) {
        // Remove newline character from the username
        username[strcspn(username, "\n")] = '\0';
        found = 0;

        // Rewind the data file to start searching from the beginning for each username
        rewind(data_file);

        // Search for the username in the data file
        while (fgets(data_line, MAX_STRING_LENGTH, data_file) != NULL) {
            if (strstr(data_line, username) != NULL) {
                printf("%s", data_line);
                found = 1;
                break;
            }
        }

        // If the username was not found in the data file, indicate it
        if (!found) {
            printf("No entry found for username: %s\n", username);
        }
    }

    // Close the files
    fclose(usernames_file);
    fclose(data_file);
}

int main() {
    // File containing the list of usernames
    const char *usernames_filename = "ahmed_users";
    
    // File containing the data to search through
    const char *data_filename = "rr";

    // Extract lines corresponding to the usernames and print them
    extract_lines_for_usernames(usernames_filename, data_filename);

    return 0;
}
