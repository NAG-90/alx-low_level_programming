#include "main.h"

/**
 * _atoi - change a string to an int
 * @s: string to change to int
 *
 * Return: an int resulting from a transformation
 */
int _atoi(char *s)
{
	int i;
	unsigned int n;

	i = 1;
	n = 0;
	do {
		if (*s == '-')
			i = i * (-1);
		else if (*s >= '0' && *s <= '9')
			n = n * 10 + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * i);
}
