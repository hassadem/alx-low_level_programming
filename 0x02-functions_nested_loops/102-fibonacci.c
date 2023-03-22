#include <stdio.h>

/**
 * main - this is our main function
 *
 * Return: this is always return 0
 */

int main(void)
{
	int i = 3;

	int first = 1;
	int second = 2;

	int next = first + second;
	printf("%d, ", first);
	printf("%d, ", second);

	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%d \n", next);
		}
		else
		{
			printf("%d, ", next);
		}
		first = second;
		second = next;
		next = first + second;
		i++;
	}
	return (0);
}
