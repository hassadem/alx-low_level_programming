#include "main.h"

/**
 * _puts_recursion - finction to print string follow by new line
 * @s: parameter to store the string
 *
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
