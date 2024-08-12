/**
 * @file input_output.c
 * @brief Example of a simple C program that shows how format specifiers are used in input and output operations.
 */

#include <stdio.h>

int main()
{
    // Declare variables to store input values
    int an_integer;
    float a_float;
    char a_char;

    // Prompt the user for input and read values using format specifiers
    printf("Enter an integer: ");
    scanf("%d", &an_integer); // %d is used for reading an integer

    printf("Enter a floating-point number: ");
    scanf("%f", &a_float); // %f is used for reading a float

    printf("Enter a character: ");
    scanf(" %c", &a_char); // %c is used for reading a character
                           // Notice the space before %c to consume any leftover newline character

    // Output the values using format specifiers
    printf("\nYou entered:\n");
    printf("Integer: %d\n", an_integer);       // %d is used for printing an integer
    printf("Floating-point: %.2f\n", a_float); // %.2f formats the float to 2 decimal places
    printf("Character: %c\n", a_char);         // %c is used for printing a character

    return 0;
}
