#include <stdio.h>
#include "main.h"

/**
 * main - function to print name
 * @argc: arguement count parameter
 * @argv: arguement vector paramater
 *
 * Return: 0 when success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
