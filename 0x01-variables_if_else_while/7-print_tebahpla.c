#include <stdio.h>

/**
 * main - this a parent function of the program
 *
 * Return: it can return whatever
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
