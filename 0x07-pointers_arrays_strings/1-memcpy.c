#include "main.h"

/**
 * _memcpy - function to copy memory string
 * @dest: where memory stored
 * @src: parameter to store
 * @n: integer parameter
 *
 * Return: always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
