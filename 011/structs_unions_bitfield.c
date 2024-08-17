/**
 * @file structs_unions_bitfield.c
 * @brief Example of a simple C program that demonstrates how to work with enums, structs, unions, and bitfields.
 *
 * This program illustrates the basics of defining and using enumerations, structures, unions, and bitfields in C.
 * These constructs are fundamental for creating complex data types and managing memory efficiently.
 */

#include <stdio.h>

// Enum to represent days of the week
// An enum is a user-defined data type that consists of a set of named integer constants.
// By default, the first constant is assigned the value 0, and the subsequent constants are assigned values in
// increasing order. However, you can explicitly assign values to the constants.
typedef enum
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

// Struct to represent a date
// A struct is a user-defined data type that allows you to group related data items under a single name.
// Each data item within a struct is called a member or field.
// The members of a struct can have different data types.
// An struct can hold pointers to other data types, arrays, and even other structs.
// The `typedef` keyword is used to create an alias for the struct type.
typedef struct
{
    int day;
    int month;
    int year;
} Date;

// Union to represent a number in different formats
// A union is a user-defined data type that allows you to store different data types in the same memory location.
// Unlike a struct, a union can only hold one value at a time.
// This is useful when you need to represent the same data in different formats.
// The size of a union is equal to the size of its largest member.
typedef union {
    int intValue;
    float floatValue;
    char charValue;
} Number;

// Struct with a bitfield to represent status flags
// A bitfield is a data structure that allows you to specify the size of each field in bits.
// This is useful when you want to pack multiple flags or values into a single memory location.
typedef struct
{
    unsigned int isOn : 1;     // 1-bit flag to indicate if a device is on
    unsigned int hasError : 1; // 1-bit flag to indicate if there's an error
    unsigned int mode : 2;     // 2-bit field to represent mode (0-3)
    unsigned int reserved : 4; // 4-bit reserved field (unused)
} Status;

int main()
{
    // Using enum
    Day today = WEDNESDAY;
    printf("Today is day number %d of the week.\n", today);

    // Using struct
    Date date = {11, 8, 2024};
    printf("Date: %d/%d/%d\n", date.day, date.month, date.year);

    // When we have a pointer to a struct, we can access its members using the `->` operator.
    Date *datePtr = &date;
    datePtr->day = 12;
    datePtr->month = 8;
    datePtr->year = 2024;
    printf("Updated date: %d/%d/%d\n", datePtr->day, datePtr->month, datePtr->year);

    // Using union
    Number num;
    num.intValue = 42;
    printf("Integer value: %d\n", num.intValue);
    num.floatValue = 3.14f;
    printf("Float value: %.2f\n", num.floatValue);
    num.charValue = 'A';
    printf("Char value: %c\n", num.charValue);
    // Note: Since a union shares memory, only the last assigned value is valid.

    // Using bitfield
    Status deviceStatus = {1, 0, 2}; // Device is on, no error, mode 2
    printf("Device status: On=%d, Error=%d, Mode=%d\n", deviceStatus.isOn, deviceStatus.hasError, deviceStatus.mode);

    return 0;
}
