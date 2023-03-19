#include <stdio.h>

/**
 * main - this is the main function whhch runs the programm
 *
 * Return: always run 0 when success
 */

int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
