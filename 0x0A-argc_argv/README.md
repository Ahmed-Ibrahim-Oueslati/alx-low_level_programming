Command Line Arguments in C: argc and argv
In C programming, the argc (argument count) and argv (argument vector) parameters are commonly used to handle command-line arguments passed to a program. These parameters allow programs to receive inputs and options from the user when they are executed from the command line.

argc (Argument Count)
argc represents the number of arguments passed to the program, including the program name itself.
It's an integer value, typically greater than or equal to 1.
The minimum value of argc is 1 when no arguments are passed other than the program name.
Example: If a program is executed with ./program arg1 arg2, argc will be 3.
argv (Argument Vector)
argv is an array of strings (char*) that holds the actual arguments passed to the program.
Each element of the array (argv[0], argv[1], argv[2], and so on) contains a command-line argument.
The first element (argv[0]) usually holds the name of the program itself.
Example: If a program is executed with ./program arg1 arg2, argv[0] will be "./program", argv[1] will be "arg1", and argv[2] will be "arg2".
Usage Example:

#include <stdio.h>

int main(int argc, char **argv) {
    printf("Number of arguments: %d\n", argc);

    printf("Program name: %s\n", argv[0]);

    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
Running the Program:
Suppose the program is compiled and executed with the following command:


./program arg1 arg2 arg3
Output:
yaml
Copy code
Number of arguments: 4
Program name: ./program
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3

====>
This simple example demonstrates how to access and utilize argc and argv to process command-line arguments in a C program.






