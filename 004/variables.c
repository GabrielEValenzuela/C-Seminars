/**
 * @file variables.c
 * @brief Example of a simple C program that shows how variables are declared and used.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    // Declare and initialize variables
    int an_integer = 5;      // Integer variable
    float a_float = 3.14f;   // Floating-point variable
    char a_char = 'A';       // Character variable
    int another_integer;     // Declare an integer variable
    int yet_another_integer; // Declare another integer variable

    // Assign values to variables
    another_integer = 10;
    yet_another_integer = 20;

    // Print the values of variables
    printf("an_integer = %d\n", an_integer);
    printf("a_float = %f\n", a_float);
    printf("a_char = %c\n", a_char);
    printf("another_integer = %d\n", another_integer);
    printf("yet_another_integer = %d\n", yet_another_integer);

    // Perform arithmetic operations
    int sum = an_integer + another_integer;
    int difference = another_integer - yet_another_integer;
    int product = an_integer * yet_another_integer;
    float quotient = a_float / an_integer;

    // Print the results of arithmetic operations
    printf("an_integer + another_integer = %d\n", sum);
    printf("another_integer - yet_another_integer = %d\n", difference);
    printf("an_integer * yet_another_integer = %d\n", product);
    printf("a_float / an_integer = %f\n", quotient);

    return 0;
}
