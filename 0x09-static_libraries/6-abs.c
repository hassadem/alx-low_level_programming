#include "main.h"

/**
 * _abs - this is a fucntion to print absolute interger
 * @a: our parameter
 * Return: this is to return 0
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
