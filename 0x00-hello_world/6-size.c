#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cType;
	int iType;
	long lType;
	double dType;
	float fType;

	printf("Size of a char: %zu byte(s)\n", sizeof(cType));
	printf("Size of an int: %zu byte(s)\n", sizeof(iType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(dType));
	printf("Size of a float: %zu byte(s)\n", sizeof(fType));
	return (0);
}
