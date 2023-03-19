#include <stdio.h>

/**
 * main - this where all function and program runs
 *
 * Return: when all the program runs successfully it print 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
	putchar(j);
	putchar('\n');
	return (0);
}
