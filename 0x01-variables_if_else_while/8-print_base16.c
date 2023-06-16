#include <stdio.h>
/**
 * main - prints all base 16 ASCII integers
 * Return: this returns 0
 */
int main(void)
{
	int number = 0;
	int letter = 'a';

	while (number <= 9)
	{
		putchar((number % 10) + '0');
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
