#include <stdio.h>
#include "main.h"

/**
 * main - function to print the number of argument pass
 * @argc: number of count for the argument
 * @argv: number of array argument
 *
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
