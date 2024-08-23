#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

#define MAX_STRING_LENGTH 1024

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

        // Check if the line is empty and handle accordingly
        if (strlen(buffer) == 0)
        {
            (*array)[i] = malloc(1);
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
            (*array)[i][0] = '\0'; // Set empty string
        }
        else
        {
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
    }

    // Close the file
    fclose(file);
}

char* concat(const char *str1, const char *separator, const char *str2)
{
    char *result = malloc(strlen(str1) + strlen(separator) + strlen(str2) + 1);
    if (result == NULL)
    {
        perror("Error allocating memory for concatenated string");
        exit(EXIT_FAILURE);
    }
    strcpy(result, str1);
    strcat(result, separator);
    strcat(result, str2);
    return result;
}

/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s <filename1> <filename2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    char **list1, **list2;
    int i, size1, size2;
    char *pwd1;

    read_file_to_array(argv[1], &list1, &size1);
    read_file_to_array(argv[2], &list2, &size2);
    /* don't worry size1 = size2 */
    for (i = 0; i < size1; i++)
    {
        pwd1 = concat(list1[i], " ", list2[i]);
        printf("%s\n", pwd1);
        free(pwd1);
    }

    // Free the allocated memory for list1 and list2
    for (i = 0; i < size1; i++)
    {
        free(list1[i]);
        free(list2[i]);
    }
    free(list1);
    free(list2);

    return 0;
}
