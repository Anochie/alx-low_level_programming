#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integer number 1 to be swapped
 * @b: integer number 2 to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
