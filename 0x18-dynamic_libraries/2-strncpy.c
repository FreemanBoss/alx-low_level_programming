#include <string.h>
#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: the byte value
 * Return: return dest, src and n
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
