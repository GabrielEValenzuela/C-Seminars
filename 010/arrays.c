/**
 * @file arrays.c
 * @brief Example of a simple C program that demonstrates how arrays are declared and used.
 *
 * This program shows how to declare, initialize, and access elements in both
 * one-dimensional (1D) and two-dimensional (2D) arrays in C.
 */

#include <stdio.h>

#define SIZE 5
#define ROWS 3
#define COLS ROWS // Define the value of COLS based on the value of ROWS

int main()
{
    // One-Dimensional Array (1D Array)
    // Declare and initialize a 1D array with 5 elements
    int oneD_array[SIZE] = {10, 20, 30, 40, 50};

    // Access and print elements of the 1D array
    printf("1D Array Elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element at index %d: %d\n", i, oneD_array[i]);
    }

    // Two-Dimensional Array (2D Array)
    // Declare and initialize a 2D array (3x3 matrix)
    int twoD_array[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Access and print elements of the 2D array
    printf("\n2D Array Elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element at [%d][%d]: %d\n", i, j, twoD_array[i][j]);
        }
    }

    return 0;
}
