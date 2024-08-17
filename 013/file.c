/**
 * @file file.c
 * @brief Example of a simple C program that demonstrates how to work with text files and binary files.
 *
 * This program illustrates how to open, read, write, and close both text files and binary files in C.
 * It also shows the difference in handling data between the two types of files.
 */

#include <stdio.h>
#include <stdlib.h> // For perror

#define MAX_TEXT_SIZE 100

int main()
{
    // Working with a text file
    // A text file is a file that contains human-readable characters.
    // meanwhile a binary file is a file that contains data in a format that is not human-readable.
    // We need define a pointer to a FILE structure to work with files in C.
    // The FILE structure is defined in the stdio.h header file and contains information about the file, such as its
    // location, status, and buffer.
    FILE *textFile;
    char textData[MAX_TEXT_SIZE]; // Buffer to store text data

    // Open a text file for writing
    textFile = fopen("example.txt", "w");
    if (textFile == NULL)
    {
        perror("Error opening text file");
        return 1;
    }

    // Write some text to the file
    fprintf(textFile, "Hello, this is a text file.\n");
    fprintf(textFile, "This is another line of text.\n");

    // Close the text file
    fclose(textFile);

    // Open the text file for reading
    textFile = fopen("example.txt", "r");
    if (textFile == NULL)
    {
        perror("Error opening text file");
        return 1;
    }

    // Read and display the content of the text file
    printf("Text file content:\n");
    // The fgets function reads a line of text from the file and stores it in the textData buffer.
    // It reads up to the specified number of characters or until a newline character is encountered.
    // If the end of the file is reached, or an error occurs, it returns NULL.
    while (fgets(textData, sizeof(textData), textFile) != NULL)
    {
        printf("%s", textData);
    }

    // Close the text file
    fclose(textFile);

    // Working with a binary file
    FILE *binaryFile;
    int numbers[] = {1, 2, 3, 4, 5};
    int readNumbers[5];

    // Open a binary file for writing
    binaryFile = fopen("example.bin", "wb");
    if (binaryFile == NULL)
    {
        perror("Error opening binary file");
        return 1;
    }

    // Write the array of integers to the binary file
    // The fwrite function writes data to a file in binary format.
    // It takes four arguments: a pointer to the data to be written, the size of each element in bytes, the number of
    // elements to write, and a pointer to the file.
    fwrite(numbers, sizeof(int), 5, binaryFile);

    // Close the binary file
    fclose(binaryFile);

    // Open the binary file for reading
    binaryFile = fopen("example.bin", "rb");
    if (binaryFile == NULL)
    {
        perror("Error opening binary file");
        return 1;
    }

    // Read the integers from the binary file
    // The fread function reads data from a file in binary format.
    // It takes four arguments: a pointer to the buffer where the data will be stored, the size of each element in
    // bytes, the number of elements to read, and a pointer to the file.
    fread(readNumbers, sizeof(int), 5, binaryFile);

    // Display the integers read from the binary file
    printf("\nBinary file content:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", readNumbers[i]);
    }
    printf("\n");

    // Close the binary file
    fclose(binaryFile);

    return 0;
}
