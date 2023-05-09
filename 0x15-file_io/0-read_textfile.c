#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - function to read a text file
 * @filename: parameter to point to file path
 * @letters: argumnet to point to the letters
 *
 * Return: when successful return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	char *buffer = NULL;
	FILE *fp = NULL;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = (char *) malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, fp);
	if (bytes_read <= 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	buffer[bytes_read] = '\0';
	if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	free(buffer);
	fclose(fp);
	return (bytes_read);
}
