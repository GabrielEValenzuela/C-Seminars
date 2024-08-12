/**
 * @file loops.c
 * @brief Example of a simple C program that demonstrates different types of loops: for, while, and do-while.
 */

#include <stdio.h>

int main()
{
    // For Loop
    // The for loop is used when the number of iterations is known beforehand.
    // It consists of an initialization, a condition, and an increment/decrement operation.
    printf("For Loop Example:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Iteration %d\n", i);
    }

    // While Loop
    // The while loop is used when the number of iterations is not known beforehand.
    // It checks the condition before executing the loop body.
    printf("\nWhile Loop Example:\n");
    int j = 0;
    while (j < 5)
    {
        printf("Iteration %d\n", j);
        j++; // Increment the counter to eventually terminate the loop
    }

    // Do-While Loop
    // The do-while loop is similar to the while loop, but it checks the condition after executing the loop body.
    // This ensures that the loop body is executed at least once.
    printf("\nDo-While Loop Example:\n");
    int k = 0;
    do
    {
        printf("Iteration %d\n", k);
        k++; // Increment the counter to eventually terminate the loop
    } while (k < 5);

    return 0;
}
