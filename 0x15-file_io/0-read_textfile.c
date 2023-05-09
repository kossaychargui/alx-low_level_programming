#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads and prints a file to the POSTIX standard
 * output.
 *
 * @filename: the file name.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letter it could read and print, 0 if failed.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	ssize_t size = letters, count;
	char *buffer;
	int i;

	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
	{
		return (0);
	}
	count = 0;
	if (filename == NULL)
	{
		return (0);
	}
	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		return (0);
	}
	while (fgets(buffer, size, fptr) != NULL && count < size)
	{
		i = 0;
		while (buffer[i] != '\0')
		{
			printf("%c", buffer[i]);
			i++;
			count++;
		}
	}
	fclose(fptr);
	return (count);
}
