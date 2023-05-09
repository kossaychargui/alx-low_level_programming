#include "main.h"
#include <fcntl.h>
#include <stdio.h>
/**
 * create_file - function that creates a file.
 *
 * @filename: the file name.
 * @text_content: string to write to the file.
 *
 * Return: 1 (success) , -1 on failure.
 *
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fptr = fopen(filename, "w+");
		if (fptr == NULL)
		{
			return (-1);
		}
		fclose(fptr);
		return (1);
	}
	fptr = fopen(filename, "w+");
	if (fptr == NULL)
	{
		return (-1);
	}
	fprintf(fptr, "%s", text_content);
	fclose(fptr);
	return (1);
}
