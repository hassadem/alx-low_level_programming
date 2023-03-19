#include <stdio.h>

/**
 * main - this where all function and program runs
 *
 * Return: when all the program runs successfully it print 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i < 10 ; i++)
		putchar(i + '0');
	for (i = 'a' ; i <= 'f' ; i++);
	putchar(i);
	putchar('\n');
	return (0);
}
