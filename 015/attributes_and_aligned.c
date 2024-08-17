/**
 * @file variables_two.c
 * @brief Example of a simple C program that demonstrates how to work with __attribute__ and aligned variables.
 *
 * This program illustrates the use of GCC-specific `__attribute__` to control variable alignment and other attributes.
 * It includes examples of setting custom alignment for variables, using packed structures, and applying other useful
 * attributes.
 */

#include <stdio.h>

// Custom attribute: aligned
// The `aligned` attribute allows you to specify a particular alignment for a variable or structure.
// In this example, the variable 'aligned_var' is aligned to a 16-byte boundary.
int aligned_var __attribute__((aligned(16)));

// Packed structure using __attribute__
// The `packed` attribute tells the compiler to pack the structure members as tightly as possible,
// reducing or eliminating any padding that would normally be added to align members.
// This is particularly useful in embedded systems or when dealing with binary file formats.
// Normally, the compiler would insert padding bytes between these members to align them to their natural boundaries.
struct __attribute__((packed)) PackedStruct
{
    char a;  // 1 byte
    int b;   // 4 bytes, normally this would be aligned to a 4-byte boundary
    short c; // 2 bytes
};

// Custom attribute: deprecated
// The `deprecated` attribute generates a warning if the function is used anywhere in the code.
// This is useful for phasing out old APIs while maintaining backward compatibility.
void __attribute__((deprecated)) old_function()
{
    printf("This function is deprecated.\n");
}

// For more information about GCC attributes, see: https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Variable-Attributes.html
// And see: https://gcc.gnu.org/onlinedocs/gcc-4.1.2/gcc/Function-Attributes.html#Function-Attributes

int main()
{
    // Aligned variable example
    // The 'aligned_var' is aligned to a 16-byte boundary, which can be important for performance reasons
    // on certain hardware architectures, particularly when dealing with SIMD operations or memory-mapped I/O.
    aligned_var = 100;
    printf("Aligned variable (16-byte boundary): %d\n", aligned_var);
    printf("Address of aligned_var: %p\n", (void *)&aligned_var);

    // Packed structure example
    // Here we demonstrate the use of a packed structure. Without the packed attribute,
    // the compiler would typically add padding between members to align them to their natural boundaries.
    struct PackedStruct packed_instance = {'A', 42, 100};
    printf("Packed structure: a = %c, b = %d, c = %d\n", packed_instance.a, packed_instance.b, packed_instance.c);
    printf("Size of packed structure: %zu bytes\n", sizeof(packed_instance));
    printf("Address of packed_instance.a: %p\n", (void *)&packed_instance.a);
    printf("Address of packed_instance.b: %p\n", (void *)&packed_instance.b);
    printf("Address of packed_instance.c: %p\n", (void *)&packed_instance.c);

    // Deprecated function example
    // Calling this function will generate a compile-time warning, alerting the developer
    // that this function is deprecated and should not be used in new code.
    old_function();

    return 0;
}
