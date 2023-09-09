#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	putchar(48);
	for (i = 49; i <= 57; i++)
	{
		putchar(44);
		putchar(i);

	}
	putchar(10);
	return (0);
}
