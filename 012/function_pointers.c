/**
 * @file function_pointers.c
 * @brief Example of a simple C program that demonstrates how to work with function pointers.
 *
 * This program illustrates how to declare, assign, and use function pointers.
 * Function pointers allow you to store the address of a function and call it indirectly.
 */

#include <stdio.h>

/**
 * @brief A simple function that adds two integers.
 *
 * @note This function will be used with function pointers.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of the two integers.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * @brief A simple function that subtracts two integers.
 *
 * @note This function will be used with function pointers.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return The subtract of the two integers.
 */
int subtract(int a, int b)
{
    return a - b;
}

// A function that takes two integers and a function pointer as arguments
// and calls the function pointed to by the function pointer
// A function pointer can be passed as an argument to another function
// This allows you to create more flexible and reusable code.
// THe syntax for declaring a function that takes a function pointer as an argument is:
// return_type function_name(arguments, return_type (*function_pointer)(arguments))
// In this case, the operate function takes two integers and a function pointer that takes two integers and returns an
// integer. The function pointer is used to perform an operation on the two integers. We dont't need to dereference the
// function pointer when calling it, as the function call operator () automatically dereferences it.
int operate(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}

int main()
{
    // Declare a function pointer and assign it to the add function
    // We are assigning the address of the add function to the function pointer
    int (*func_ptr)(int, int) = add;

    // Use the function pointer to call the add function
    int result = func_ptr(10, 5);
    printf("Addition result using function pointer: %d\n", result);

    // Reassign the function pointer to point to the subtract function
    func_ptr = subtract;

    // Use the function pointer to call the subtract function
    result = func_ptr(10, 5);
    printf("Subtraction result using function pointer: %d\n", result);

    // Use the operate function to perform addition
    result = operate(20, 10, add);
    printf("Operate result using add: %d\n", result);

    // Use the operate function to perform subtraction
    result = operate(20, 10, subtract);
    printf("Operate result using subtract: %d\n", result);

    return 0;
}
