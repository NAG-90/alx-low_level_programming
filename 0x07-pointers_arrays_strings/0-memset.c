#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: pointer to a memory to set constand
 * @b: char to set
 * @n: number of elements to set starting from
 *
 * Return: pointer to a memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
