/**
 * @file preprocessor.c
 * @brief Example of a simple C program that demonstrates how the preprocessor works.
 *
 * The preprocessor is a tool that processes the source code before it is compiled.
 * It handles tasks like macro substitution, file inclusion, and conditional compilation.
 *
 *          C Program
 *             |
 *             |
 *             V
 *   *-------------------*
 *   |   Preprocessor    |
 *   *-------------------*
 *             |
 *             |
 *             V
 *   *-------------------*
 *   |   Compiler        |
 *   *-------------------*
 *             |
 *             |
 *             V
 *   *-------------------*
 *   |   Assembler       |
 *   *-------------------*
 *
 *
 * This example is from the book "Head First C".
 */

#include <stdio.h> // Include standard input/output library

// Directives always end at the first new-line character, unless explicity continued, to do it, we must end the current
// line with \ character. Can appear anywhere in a program, but they are usually placed at the beginning of the file.

// The define directive is used to define macros, which are replaced by their values during preprocessing.
// Macros are defined using the syntax: #define MACRO_NAME value
// Macros can be used to define constants, functions, or code snippets that are replaced before compilation.
// The #undef directive is used to undefine a macro.

#define PI 3.14159 // Define a macro for the value of PI

// A parametrized macro, also know as function-like macro can take arguments and perform operations on them.
// The arguments are passed within parentheses after the macro name.
// The arguments can be used in the macro definition to perform calculations or substitutions.

// Macro to calculate the area of a circle
// The macro takes a parameter `r` which represents the radius of the circle
#define AREA_OF_CIRCLE(r) (PI * (r) * (r))

// Conditional compilation example
// If DEBUG is defined, print debugging information
#ifdef DEBUG
#define DEBUG_PRINT(x) printf("Debug: %s\n", x)
#else
#define DEBUG_PRINT(x) // Do nothing if DEBUG is not defined
#endif

// To define the value of a macro, we can use the -D option with the compiler.
// For example, to define the DEBUG macro, we can use the following command:
// gcc -DDEBUG preprocessor.c -o preprocessor

// The remaining directives— #error, #line, and #pragma are more specialized and less commonly used.
// The #error directive is used to generate a compilation error with a specified message.
// The #line directive is used to change the line number and file name reported by the compiler.
// The #pragma directive is used to provide additional information to the compiler, such as optimization settings. It's
// used for example for disabling warnings.

// Some Standard Predefined Macros can be used to check the compiler, the operating system, and other information.
// __FILE__ - The name of the current file as a string literal.
// __LINE__ - The current line number as an integer.
// __DATE__ - The current date as a string in the format "Mmm dd yyyy".
// __TIME__ - The current time as a string in the format "hh:mm:ss".
// More information can be found in the C standard. https://gcc.gnu.org/onlinedocs/cpp/Standard-Predefined-Macros.html

int main()
{
    int radius = 5;
    double area;

    // Calculate the area of a circle using the macro
    area = AREA_OF_CIRCLE(radius);

    // Print the area of the circle
    printf("The area of a circle with radius %d is %.2f\n", radius, area);

    // Example of conditional compilation
    DEBUG_PRINT("This is a debug message.");

    return 0;
}
