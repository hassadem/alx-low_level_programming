#include "main.h"

/**
 * factorial - the fucntion to write factoria
 * @n: parameter to hold the value
 *
 * Return: always factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
