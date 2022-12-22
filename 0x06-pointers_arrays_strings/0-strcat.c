#include "main.h"

/**
 * _strcat - This will concatenate two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);
{
	int dest_length = 0, i;

	while (dest[dest_length])
	{
		dest_length++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dest_length] = src[i];
		dest_length++
	}
	dest[dest_length] = '\0';
	return (dest);
}

