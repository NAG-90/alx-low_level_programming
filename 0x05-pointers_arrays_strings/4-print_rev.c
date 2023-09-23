#include "main.h"

/**
 * print_rev - print string in a reverse order
 * @str: string to print
 *
 * Return: nothing
 */
void print_rev(char *str)
{
	int j = _strlen(str);

	while (j >= 0 || str[j] != '\0')
	{
		_putchar(str[j]);
		j--;
	}
	_putchar('\n');
}

/**
 * _strlen - calculate the lenght of a string
 * @s: string to determine lenght
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
