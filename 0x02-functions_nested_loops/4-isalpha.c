#include "main.h"

/**
 * _isalpha - this is our function code
 * @c: our parameter value
 *
 * Return: this is to retun 1 if okay and 0 if not good
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
