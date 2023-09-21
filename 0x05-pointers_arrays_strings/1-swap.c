#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: address of the integer
 * @b: address of the integer
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
