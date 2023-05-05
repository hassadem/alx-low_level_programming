#include "main.h"

/**
 * set_bit - function to set the value of a bit to 1
 * @n: pointer to the bit value
 * @index: index to chnage the value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if(index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
