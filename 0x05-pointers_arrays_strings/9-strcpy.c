#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: a pointer to a dest
 * @src: a pointer to a source
 *
 * Return: a pointer to a dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
