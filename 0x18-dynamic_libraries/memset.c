#include "main.h"

/**
 * _memset - function to print memory set
 * @s: parameter to fill memory set
 * @b: parameter to fill memory
 * @n: parameter
 *
 * Return: aleays 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
