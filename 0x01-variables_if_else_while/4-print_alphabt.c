#include <stdio.h>
/**
 * main - prints all alphabets except e and q.
 * Return: Return integer
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
