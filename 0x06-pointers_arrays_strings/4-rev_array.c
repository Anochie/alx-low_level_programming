#include "main.h"

/**
 * reverse_array - This reverses the content of an array of integers
 * @a: Is an array of intergers
 * @n: Is the number of elements to swap
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, j;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (j = 0; j < i / 2; k++)
	{
		aux = a[j];
		a[j] = *p;
		*p = aux;
		p--;
	}
}
