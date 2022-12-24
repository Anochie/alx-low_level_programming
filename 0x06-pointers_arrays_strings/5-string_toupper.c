#include "main.h"

/**
 * string_toupper - this changes all lowercase letters to uppercase
 * @p: the string to be changed
 *
 * Return: char var
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}
		a++;
	}
	return (p);
}
