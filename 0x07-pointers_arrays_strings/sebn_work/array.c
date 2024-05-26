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
int size1, size2;
int i, j;
int found;

// Read list1.txt into list1 array
read_file_to_array("list1", &list1, &size1);

// Read list2.txt into list2 array
read_file_to_array("list2", &list2, &size2);

// Compare arrays and print elements from list1 not found in list2
for (i = 0; i < size1; i++) {
found = 0;
for (j = 0; j < size2; j++) {
if (strcmp(list1[i], list2[j]) == 0) {
found = 1;
break;
}
}
if (!found) {
printf("%s\n", list1[i]);
}
}

// Free allocated memory
for (i = 0; i < size1; i++) {
free(list1[i]);
}
free(list1);

for (i = 0; i < size2; i++) {
free(list2[i]);
}
free(list2);

return 0;
}
