#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* main - Entry point of the program.
*
* Description: Prints a string to the console.
*
* Return: Always 0 (success).
*/
char *_pmaking(char *list)
{
    char *pwd;
    int i;

    /* Allocate memory for pwd */
    pwd = (char *)malloc(strlen(list) + 1); // +1 for the null terminator '\0'
    if (pwd == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    if (list[0] >= 'a' && list[0] <= 'z')
    {
        pwd[0] = list[0] - 32;
    }
    else
    {
        pwd[0] = list[0];
    }

    if (pwd[0] == 'I' || pwd[0] == 'O')
    {
        pwd[0] = 'T';
    }

    if (list[1] >= 'a' && list[1] <= 'z')
    {
        pwd[1] = list[1] - 32;
    }
    else
    {
        pwd[1] = list[1];
    }

    if (pwd[1] == 'I' || pwd[1] == 'O')
    {
        pwd[1] = 'T';
    }

    pwd[2] = '.';

    for (i = 0; list[i] != '\0'; i++)
    {
        if (list[i] == '.')
        {
            if (list[i + 1] >= 'A' && list[i + 1] <= 'Z')
            {
                pwd[3] = list[i + 1] + 32;
            }
            else
            {
                pwd[3] = list[i + 1];
            }

            if (pwd[3] == 'l')
            {
                pwd[3] = 'u';
            }

            if (list[i + 2] >= 'A' && list[i + 2] <= 'Z')
            {
                pwd[4] = list[i + 2] + 32;
            }
            else
            {
                pwd[4] = list[i + 2];
            }

            if (pwd[4] == 'l')
            {
                pwd[4] = 'u';
            }
        }
    }

    pwd[i] = '\0';
    /* printf("the user name is : %s \n the pwd is %s \n " , list, pwd); */

    return pwd;
}

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

/**
 * main - Entry point of the program.
 *
 * Description: Prints a string to the console.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    char **list1;
    int i, size1;
    char *pwd1;

    read_file_to_array(argv[1], &list1, &size1);

    for (i = 0; i < size1; i++)
    {
        pwd1 = _pmaking(list1[i]);
        if (pwd1 != NULL)
        {
            printf("%s\n", pwd1);
            free(pwd1);  // Free the allocated memory for pwd1 after use
        }
    }

    // Free the allocated memory for list1
    for (i = 0; i < size1; i++)
    {
        free(list1[i]);
    }
    free(list1);

    return 0;
}
