/**
 * @file n_queens.c
 * @brief Example of a simple C program that solves the N-Queens problem.
 *
 * This program finds all possible solutions to the N-Queens problem for a given board size.
 * It prints each solution, where 'Q' represents a queen, and '#' represents an empty space.
 * The original version was a winner of the 1998 International Obfuscated C Code Contest.
 */

#include <stdio.h>

#define MAX_SIZE 99

int board[MAX_SIZE]; // Array to store the positions of the queens on the board

/**
 * @brief Solves the N-Queens problem for a board of size s.
 *
 * This function finds all solutions to the N-Queens problem for a given board size.
 * It prints each solution, where 'Q' represents a queen, and '#' represents an empty space.
 *
 * @param s The size of the board (number of queens to place)
 */
void solveNQueens(int s)
{
    int i = 0, j = 0, l = 0, v = 0;

    while (1)
    {
        v = board[j] - board[i]; // Calculate the difference between queens' positions

        if (i < s)
        {
            j++;
            // Check if placing a queen is possible
            if (j < s && v && v != i - j && v != i + j)
            {
                if (!printf(2 + "\n\n%c" - (!l << !j), " #Q"[(l ^ v ? (l ^ j) & 1 : 2)]) && ++l)
                {
                    continue;
                }
            }

            // If placing is not possible, backtrack
            if (++board[i] >= s)
            {
                board[i--] = 0;
                if (i < 0)
                {
                    break; // Exit if we have backtracked to the start
                }
            }
        }
        else
        {
            // If a solution is found, print it
            for (i = 0; i < s; i++)
            {
                for (j = 0; j < s; j++)
                {
                    printf("%c ", board[i] == j ? 'Q' : '#');
                }
                printf("\n");
            }
            printf("\n");

            // Backtrack to find the next solution
            i--;
            if (i < 0)
            {
                break; // Exit if we have found all solutions
            }

            board[i]++;
        }
    }
}

/**
 * @brief The main function to run the N-Queens solver.
 *
 * This function reads the size of the board from the user and calls the solver.
 *
 * @return Returns 0 to indicate successful execution.
 */
int main()
{
    int size;

    // Read the size of the board
    printf("Enter the size of the board (number of queens): ");
    scanf("%d", &size);

    // Solve the N-Queens problem for the given board size
    solveNQueens(size);

    return 0;
}
