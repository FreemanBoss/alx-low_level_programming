#include <stdio.h>
/**
 * main - prints all base 10 digits using putchar
 * Return: This returns zero
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
