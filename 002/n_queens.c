/**
 * @file n_queens.c
 * @brief Example of a simple C program that solves the N-Queens problem.
 *
 * This program finds all possible solutions to the N-Queens problem for a given board size.
 * It prints each solution, where 'Q' represents a queen, and '#' represents an empty space.
 * The original version was a winner of the 1998 International Obfuscated C Code Contest.
 */

#include <stdio.h> // Standard input/output library for `printf` and `scanf` functions

v,i,j,k,l,s,a[99];
main()
{
	for(scanf("%d",&s);*a-s;v=a[j*=v]-a[i],k=i<s,j+=(v=j<s&&(!k&&!!printf(2+"\n\n%c"-(!l<<!j)," #Q"[l^v?(l^j)&1:2])&&++l||a[i]<s&&v&&v-i+j&&v+i-j))&&!(l%=s),v||(i==j?a[i+=k]=0:++a[i])>=s*k&&++a[--i]);
}
