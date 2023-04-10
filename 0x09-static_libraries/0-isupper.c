#include "main.h"

/**
 * _isupper - function to print uppercase letter
 * @c: parameter for the function
 *
 * Return: return 1 when uppercase and 0 when otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
