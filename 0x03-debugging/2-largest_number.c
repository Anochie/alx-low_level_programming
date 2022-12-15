#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Always 0.
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        printf("largest = %d", a);
    }
    else if (b > a && a > c)
    {
        printf("largest = %d", b);
    }
    else
    {
        printf("largest = %d", c);
    }

    return (0);
}
