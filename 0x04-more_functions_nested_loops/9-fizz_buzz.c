#include <stdio.h>

/**
 * main - this is our main program
 *
 * Return: 0
 */

int main(void)
{

	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d" , i);

			printf("\n");
		}
		else
		{
			printf(" %d", i);
		}
	}
	return (0);
}
