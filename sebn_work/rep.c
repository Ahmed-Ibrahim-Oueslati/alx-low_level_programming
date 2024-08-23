#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
#define MAX_STRING_LENGTH 100

void read_file_to_array(const char *filename, char ***array, int *size)
{
    FILE *file;
    char buffer[MAX_STRING_LENGTH];

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Read the size of the array
    if (fscanf(file, "%d\n", size) != 1)
    {
        perror("Error reading size from file");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    // Allocate memory for the array of string pointers
    *array = malloc(*size * sizeof(char *));
    if (*array == NULL)
    {
        perror("Error allocating memory");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    // Read each string from the file
    for (int i = 0; i < *size; i++)
    {
        if (fgets(buffer, MAX_STRING_LENGTH, file) == NULL)
        {
            perror("Error reading string from file");
            // Free previously allocated memory before returning
            for (int j = 0; j < i; j++)
            {
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
        if ((*array)[i] == NULL)
        {
            perror("Error allocating memory for string");
            // Free previously allocated memory before returning
            for (int j = 0; j < i; j++)
            {
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
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    char **arm_list;
    int i, size1;
    char *pwd1;

    read_file_to_array(argv[1], &arm_list, &size1);
printf("%s\n", arm_list[2]);
/*ech line from arm nb to date is an arm
realisation and verification and it team verification wa7dhom 
make a list of participants 
with a scanf msg */
return (0);
}
