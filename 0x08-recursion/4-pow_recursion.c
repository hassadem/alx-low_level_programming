#include "main.h"

/**
 * _pow_recursion - function to print the value raised to
 * @x: paramter to hold the fucntion
 * @y: parameter to hold the function
 *
 * Return: always return 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
