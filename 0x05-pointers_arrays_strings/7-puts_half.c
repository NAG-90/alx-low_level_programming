#include "main.h"

/**
 * puts_half - print half of a given string
 * @str: string to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int lenght;
	int i;

	lenght = _strlen(str);
	if (lenght % 2 == 0)
		i = lenght / 2;
	else
		i = (lenght + 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _strlen - calculate the lenght of the given string
 * @s: string to compute
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
