#include "main.h"

/**
 * _strlen - function to return lenght of a string
 * @s: parameter to stor the string value
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
