#include "main.h"
/**
 * jack_bauer - prints jack baue timing
 * Return - always 0
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar(a / 10 + 48);
			_putchar(a % 10 + 48);
			_putchar(':');
			_putchar(b / 10 + 48);
			_putchar(b % 10 + 48);
			_putchar('\n');
		}
	}
}
