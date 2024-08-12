/**
 * @file pointer_array_relation.c
 * @brief Example of a simple C program that demonstrates the relationship between pointers and arrays.
 *
 * This program shows how arrays and pointers are closely related in C.
 * It explains how array elements can be accessed using both array indexing and pointers.
 */

#include <stdio.h>

#define SIZE 5

int main()
{
    // Declare and initialize a 1D array
    int array[SIZE] = {10, 20, 30, 40, 50};

    // Declare a pointer to an integer
    int *ptr;

    // Point the pointer to the first element of the array
    ptr = array; // Equivalent to ptr = &array[0];

    // Access and print elements of the array using array indexing
    printf("Accessing array elements using array indexing:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Access and print elements of the array using pointer arithmetic
    printf("\nAccessing array elements using pointer arithmetic:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i)); // Equivalent to array[i]
    }

    // Modify array elements using pointers
    *(ptr + 2) = 100; // Modify the third element of the array

    // Print the modified array using array indexing
    printf("\nModified array after using pointers:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
