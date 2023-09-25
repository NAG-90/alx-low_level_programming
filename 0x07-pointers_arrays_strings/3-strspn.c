#include "main.h"

/**
 * _strspn - have the lenght of prefix substring
 * @s: input string
 * @accept: bytes to search from s
 *
 * Return: number of bytes in the segment s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;
	char *s1;
	char *s2;

	n = 0;
	s1 = s;
	s2 = accept;
	while (*s1)
	{
		for (i = 0; s2[i]; i++)
		{
			if (s2[i] == *s1)
			{
				n++;
				break;
			}
			else if ((s2[i + 1] == '\0')
					return (n);
		}
		s1++;
	}
	return (n);
}
