#include "main.h"

/**
 * _strspn - hat gets the length of a prefix substring
 * @s: parameter to stored the lenght
 * @accept: parameter to stored the substring
 *
 * Return: always s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
