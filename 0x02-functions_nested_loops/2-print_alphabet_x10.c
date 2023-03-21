#include "main.h"

/**
 * print_alphabet_x10 - this is a function to print alphabet times 10
 * Return: this is to return value of 1
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
