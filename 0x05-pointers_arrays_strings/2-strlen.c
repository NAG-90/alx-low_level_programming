#include "main.h"

/**
 * _strlen - calculate lenght of a giving string
 * @s: string to compute
 *
 * Return: Always return lenght of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
