#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		c++;
	}
	return (c);
}

