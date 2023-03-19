#include <stdio.h>

/**
 * main - this is where i will write the program of the project
 *
 * Return: at the end of the program it should print 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
