#include <stdio.h>
/**
 * main - This prints all uppercase and lowercase
 *Return: This returns 0
 */

int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
