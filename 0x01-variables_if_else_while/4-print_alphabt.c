#include <stdio.h>

/**
 * main - this a place where i declare all my variables to run the program
 *
 * Return: when all the code run succesfully it returns a value
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
