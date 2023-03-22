#include <stdio.h>

/**
 * main - this is our main function
 *
 * Return: this is always return 0
 */

int main(void)
{
	int i = 3;

	long int first = 1;
	long int second = 2;

	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;
		next = first + second;
		i++;
	}
	return (0);
}
