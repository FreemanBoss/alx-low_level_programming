#include <stdio.h>
/**
 * main - This prints all uppercase and lowercase
 *Return: This returns 0
 */

int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	int y = 'A';

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
