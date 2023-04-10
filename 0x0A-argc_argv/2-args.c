#include <stdio.h>
#include "main.h"

/**
 * main - function to print argument pass to the program in new line
 * @argc: argument count
 * @argv: array argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
