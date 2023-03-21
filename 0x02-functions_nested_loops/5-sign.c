#include "main.h"
#include <stdio.h>

/**
 * print_sign - to print sign arithmetic
 * @n: our parameter to checked
 *
 * Return: return 1, -1 and 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0, ");
		return (0);
	}
	else
	{
		printf("-, ");
		return (-1);
	}
}