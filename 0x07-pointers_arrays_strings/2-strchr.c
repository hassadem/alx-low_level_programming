#include "main.h"

/**
 * _strchr - function to locate character
 * @s: parameter to stored the character
 * @c: parameter to stored the character
 *
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
