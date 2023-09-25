#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - genenrate a ramdom pwd
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char s;

	srand(time(0));
	while (i <= 2645)
	{
		s = rand() % 128;
		s += s;
		putchar(s);
	}
	putchar(2772 - i);
	return (0);
}
