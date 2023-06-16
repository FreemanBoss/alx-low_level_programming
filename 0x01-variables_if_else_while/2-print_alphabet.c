#include <stdio.h>

/**
 * main - This prints all lower-case alphabets
 * Return: Always 0
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
