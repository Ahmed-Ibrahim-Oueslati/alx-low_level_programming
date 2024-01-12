C Programming Basics
Nested Loops
Nested loops in C allow you to use one or more loops inside another. This construct is useful for handling complex iteration patterns. To use nested loops, simply place one loop inside the body of another, providing a versatile way to iterate through data structures or perform repetitive tasks.

Functions
Functions in C are blocks of code designed to perform a specific task. They enhance code modularity and reusability. To use functions, declare them with a return type, name, and parameters. Define the function's behavior within its curly braces, and call it from other parts of your program as needed.

Declaration vs. Definition of a Function
In C, a function declaration introduces the function's signature, including its name, return type, and parameter types, without specifying its implementation. On the other hand, a function definition includes the actual code that constitutes the function's behavior. It provides the logic for the declared function.

Prototype
A function prototype declares the function's signature, allowing the compiler to understand the function's interface before its actual implementation. Prototypes typically appear at the beginning of a source file or in header files, providing a reference for functions defined later in the code.

Scope of Variables
The scope of a variable in C defines where in the program the variable is accessible. Local variables are limited to the block in which they are declared, while global variables are accessible throughout the entire program.

GCC Flags
-Wall: Enable most warning messages to help catch potential issues during compilation.
-Werror: Treat warning messages as errors, promoting a more stringent code quality standard.
-pedantic: Adhere strictly to the C standard and issue warnings for non-standard code.
-Wextra: Enable additional warning messages beyond what -Wall provides.
-std=gnu89: Specify the C standard to follow; in this case, gnu89 corresponds to the GNU dialect of ISO C89.
Header Files and #include
Header files in C contain function prototypes, macro definitions, and other declarations. They facilitate code organization and modularization. Use the #include preprocessor directive to include a header file in your source code, making the declared content available for use in your program.

