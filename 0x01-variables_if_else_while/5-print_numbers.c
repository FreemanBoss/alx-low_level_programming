#include <stdio.h>
/**
 * main - prints all base ten single digits
 * Return: This returns 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
