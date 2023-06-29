#include <stdio.h>
#include <string.h>

/**
 * _strncat - a function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: the bytes value
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
