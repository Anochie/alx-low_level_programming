#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n number of array of integers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[j]);

		if (z != (n - 1))
		{
			printf(", ");
		}
	}
	printf('\n');
}
