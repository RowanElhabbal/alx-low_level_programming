#include "main.h"
/**
 * swap_int- This code defines a function  swap_int takes two integer pointers
 * as its parameters and swaps the values of the integers they point to.
 * @a: input
 * @b: input
 * Return: void
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
