/**
 * @file variables_two.c
 * @brief Example of a simple C program that demonstrates how to work with volatile, const, and static variables.
 *
 * This program also illustrates the use of global and local variables, the extern keyword, and weak symbols.
 */

#include <stdio.h>

// Global variable
// A global variable is declared outside of all functions and is accessible throughout the entire program.
// In this example, 'global_var' can be accessed by any function within this file.
int global_var = 10;

// Extern variable declaration
// The 'extern' keyword is used to declare a global variable that is defined in another file or later in the same file.
// It informs the compiler that the variable's definition and memory allocation exist elsewhere.
extern int external_var;

// Weak symbol - will be overridden if another definition is provided
// The '__attribute__((weak))' qualifier defines a function as a weak symbol, meaning it can be overridden by another
// function with the same name if such a function is defined elsewhere. If no overriding definition is found, the weak
// function is used.
__attribute__((weak)) void weak_function()
{
    printf("Weak function: This is the default implementation.\n");
}

void demo_function()
{
    // Local variable
    // A local variable is declared within a function and is only accessible within that function.
    // It is reinitialized each time the function is called.
    int local_var = 5;

    // Static local variable
    // A static local variable retains its value between function calls. It is initialized only once,
    // and its value persists across multiple invocations of the function.
    static int static_var = 0;
    static_var++;

    printf("Local variable: %d\n", local_var);
    printf("Static variable: %d\n", static_var);
}

// Function using a volatile variable
// The 'volatile' keyword indicates that the value of a variable may change at any time,
// without any action being taken by the code the compiler finds nearby.
// This is typically used in embedded systems where a variable might be modified by hardware or an interrupt.
void volatile_demo(volatile int *vptr)
{
    // Reading a volatile variable
    printf("Volatile variable: %d\n", *vptr);
}

// Function using a const variable
// The 'const' keyword is used to define variables that cannot be modified after their initial assignment.
// Attempting to change a const variable results in a compile-time error.
void const_demo(const int *cptr)
{
    // Trying to modify a const variable will result in a compile-time error
    // *cptr = 20; // Uncommenting this line would cause a compilation error
    printf("Const variable: %d\n", *cptr);
}

int main()
{
    // Global variable access
    // The global variable 'global_var' can be accessed directly within any function, including 'main'.
    printf("Global variable: %d\n", global_var);

    // Local and static variable demonstration
    // 'demo_function' demonstrates the use of both local and static variables.
    // The local variable is reinitialized with each function call, whereas the static variable retains its value.
    demo_function();
    demo_function();

    // Volatile variable usage
    // 'volatile_var' is declared as a volatile variable, which informs the compiler that its value can change
    // unexpectedly. This variable is typically used in scenarios involving hardware interaction or multithreading.
    volatile int volatile_var = 100;
    volatile_demo(&volatile_var);

    // Const variable usage
    // 'const_var' is declared as a const variable, ensuring that its value cannot be altered after initialization.
    // This is particularly useful for defining constants or ensuring the integrity of values that should not change.
    const int const_var = 50;
    const_demo(&const_var);

    // Extern variable usage
    // The 'extern' keyword allows the use of 'external_var', a variable defined elsewhere in the program.
    // This enables sharing of global variables across different files or sections of the code.
    printf("External variable: %d\n", external_var);

    // Call the weak function
    // The weak function is called here. If no overriding definition is provided, the default implementation is used.
    // If another function with the same name and without the weak attribute is defined, it will replace this weak
    // function.
    weak_function();

    return 0;
}

// Definition of external_var
// The actual definition of the 'external_var' follows its declaration.
// This variable can be accessed from other parts of the program where it is declared using 'extern'.
int external_var = 25;
