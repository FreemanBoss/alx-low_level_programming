#include "main.h"
/**
 * print_alphabet - prints lowercases
 * Return: always zero
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);

		alphabet++;
	}
	_putchar('\n');
}
