#include <stdio.h>

/**
 * main - main function
 *
 * Return: always return 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	return (0);
}