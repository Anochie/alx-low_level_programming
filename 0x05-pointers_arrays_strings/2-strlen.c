#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is the given length of the string
 *
 * Return: void
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
