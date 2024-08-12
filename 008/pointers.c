/**
 * @file pointers.c
 * @brief Example of a simple C program that demonstrates how pointers are used to modify variables.
 * This example is present on the book "Head First C".
 */

#include <stdio.h>

// Function to move coordinates south-east
// This function takes pointers to two integers, representing latitude and longitude.
// It decreases the latitude by 1 (moving south) and increases the longitude by 1 (moving east).
void go_south_east(int *lat, int *lon)
{
    *lat = *lat - 1; // Decrease latitude by 1 (move south)
    *lon = *lon + 1; // Increase longitude by 1 (move east)
}

int main()
{
    int latitude = 32;   // Initialize latitude to 32
    int longitude = -64; // Initialize longitude to -64

    // Call the function go_south_east, passing the memory addresses of latitude and longitude
    // This allows the function to modify the actual values of these variables
    go_south_east(&latitude, &longitude);

    // Print the memory addresses of latitude and longitude variables
    // %p is used to print a pointer (memory address)
    printf("The memory addresses are: [%p, %p]\n", (void *)&latitude, (void *)&longitude);

    // Print the size of an int type variable in bytes
    printf("The size of an int is: %li\n", sizeof(latitude));

    // Print the new coordinates after moving south-east
    // %i is used to print an integer
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

    return 0; // Return 0 to indicate successful execution of the program
}
