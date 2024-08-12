/**
 * @file hello_world.c
 * @brief A simple program that prints "Hello, World!" to the console.
 *
 * This program demonstrates the basic structure of a C program. It includes
 * a standard library, defines a `main` function, and uses the `printf` function
 * to print a message to the console.
 */

#include <stdio.h> // Standard input/output library for `printf` function

/**
 * @brief The entry point of the program.
 *
 * The `main` function is the starting point of every C program. The return type
 * `int` indicates that the function returns an integer value. The function can
 * optionally take arguments (e.g., `int main(int argc, char *argv[])`), but in
 * this case, it takes no arguments.
 *
 * @return Returns 0 to indicate successful execution.
 */
int main(void)
{
    // Print the message "Hello, World!" to the console
    printf("Hello, World!\n");

    // Return 0 to the operating system indicating the program terminated successfully
    return 0;
}
