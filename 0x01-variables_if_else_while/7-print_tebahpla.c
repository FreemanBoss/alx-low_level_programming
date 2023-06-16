#include <stdio.h>
/**
 * main - This prints alphabets in reverse
 * Return: This returns zero
 */
int main(void)
{
	int x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
