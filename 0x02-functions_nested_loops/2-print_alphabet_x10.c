#include "main.h"
/**
 * print_alphabet_x10 - prints 10x
 * Return: zero
 */
void print_alphabet_x10(void)
{
	char alphabet, x10;

	for (x10 = 0; x10 < 10; x10++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
