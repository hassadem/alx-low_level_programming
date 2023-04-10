#include "main.h"

/**
 * _strpbrk - function to searches a string for any of a set of bytes
 * @s: parameter to store
 * @accept: parameter to accept
 *
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
