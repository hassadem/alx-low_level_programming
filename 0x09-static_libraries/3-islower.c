#include "main.h"

/**
 * _islower - this is a function to heck for lowercase character
 * @c:this is the parameter to check lowercase
 * Return: this is to return 1 if sucess else it will return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
