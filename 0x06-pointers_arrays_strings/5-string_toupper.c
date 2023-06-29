#include "main.h"

/**
 * string_toupper - a function that changes all lof a string to uppercase.
 * @c: sring to change to uppercase
 * Return: uppercases
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i] - 32;
	}
	return (c);
}
