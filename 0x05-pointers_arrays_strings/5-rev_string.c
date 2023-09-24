#include "main.h"

/**
 * rev_string - print string parameter in a reverse order
 * @str: string to print
 *
 * Return: nothing
 */
void rev_string(char *str)
{
	int len;
	int i;

	len = _strlen(str) - 1;
	i = 0;
	while (len > i)
	{
		swap_char(str + len, str + i);
		i++;
		len--;
	}
}

/**
 * _strlen - return the lenght of a string
 * @s: address of a pointer of char
 *
 * Return: Always
 */
int _strlen(char *s)
{
        int count;

        count = 0;
        while (s[count] != '\0')
        {
                count++;
        }
        return (count);
}

/**
 * swap_char - swap value of two char
 * @a: a pointer to a char
 * @b: a pointer to a char
 *
 * Return: nothing
 */
void swap_char(char *a, char *b)
{
        char c;

        c = *a;
        *a = *b;
        *b = c;
}
