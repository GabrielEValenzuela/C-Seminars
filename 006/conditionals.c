/**
 * @file conditionals.c
 * @brief Example of a simple C program that shows how conditional statements are used.
 *
 * This program demonstrates the use of `if-else` statements, the ternary operator,
 * and the `switch-case` statement in C. It also explains the benefits of each construct.
 */

#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    char grade;

    // If-Else Statement
    printf("If-Else Example:\n");
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("a is not greater than b\n");
    }

    // Benefit: `if-else` statements are useful for evaluating multiple conditions
    // with complex logic. They are versatile and can be used for almost any conditional
    // operation.

    // Ternary Operator
    printf("\nTernary Operator Example:\n");
    // Syntax: condition ? expression_if_true : expression_if_false;
    int max = (a > b) ? a : b;
    printf("The maximum value is: %d\n", max);

    // Benefit: The ternary operator is a concise way to perform a simple conditional
    // assignment. It is ideal for cases where a single condition determines the value
    // of a variable, leading to more compact and readable code.

    // Switch-Case Statement
    printf("\nSwitch-Case Example:\n");
    printf("Enter a grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Well done!\n");
        break;
    case 'C':
        printf("Good job!\n");
        break;
    case 'D':
        printf("You passed.\n");
        break;
    case 'F':
        printf("Better try again.\n");
        break;
    default:
        printf("Invalid grade\n");
    }

    // Benefit: The `switch-case` statement is more efficient and readable when you
    // need to compare a variable against multiple possible constant values. It's
    // particularly useful for handling menu selections or responding to different
    // states.

    return 0;
}
