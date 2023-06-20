#include "main.h"
/**
 * print_last_digit - this prints last digit
 * @num: variable in question
 * Return: return ld else false
 */
int print_last_digit(int num)
{
	int ld;

	if (num < 0)
	{
		ld = -1 * (num % 10);
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = num % 10;
		_putchar(ld + '0');
		return (ld);
	}
	return (ld);
}


