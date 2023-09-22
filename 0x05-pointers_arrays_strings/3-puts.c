#include "main.h"

/**
 * _puts - print a string to the standard output
 * @str: string to print
 *
 * Return: nothing
 */
voiud _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return;
}
