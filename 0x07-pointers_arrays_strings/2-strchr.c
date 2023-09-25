#include "main.h"

/**
 * _strchr - find a character in a string
 * @s: string where to search
 * @c: character to seek
 *
 * Return: address of seeking character
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
