#include "main.h"

/**
 * print_last_digit - my function to print last digit
 * @j: parameter for the last digit
 *
 * Return: to return i
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (j < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
