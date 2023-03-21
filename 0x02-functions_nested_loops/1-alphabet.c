#include "main.h"

/**
 * main - this is the main function
 * print_alphabet - this is a function to print alphabet in lowercase
 *
 * Return: this is to return 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
