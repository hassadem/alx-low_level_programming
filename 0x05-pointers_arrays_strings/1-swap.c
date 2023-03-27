#include "main.h"

/**
 * swap_int - function to swap integer
 * @a: integer swap parameter
 * @b: integer swap parameter
 *
 * Return: a and b
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
