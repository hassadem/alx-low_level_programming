#include "main.h"

/**
 * _print_rev_recursion - fucntion to print string in reverse order
 * @s: parameter to hold the string
 *
 * Return: always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
