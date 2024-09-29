#include <stdio.h>
#include <stdlib.h>

#define MAX_USERNAME_LENGTH 50

int main() {
    // Open the file for reading
    FILE *file = fopen("/0x07-pointers_arrays_strings/list", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the first line from the file
    char username[MAX_USERNAME_LENGTH];
    if (fgets(username, sizeof(username), file) == NULL) {
        fprintf(stderr, "Error reading from file\n");
        fclose(file);
        return 1;
    }

    // Print the first line (username)
    printf("First element: %s\n", username);

    // Close the file
    fclose(file);

    return 0;
}
