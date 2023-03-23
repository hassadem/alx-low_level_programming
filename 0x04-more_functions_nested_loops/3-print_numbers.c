#include "main.h"

/**
 * print_numbers - this is a function to print numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		_putchar(i + '0');
	_putchar('\n');
}
