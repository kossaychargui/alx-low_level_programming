#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * append_text_to_file - function that appends text to the end of a file.
 *
 * @filename: the file name.
 * @text_content: the text to add .
 *
 * Return: 1 on success, -1 of failure.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fptr = fopen(filename, "w");
		if (fptr == NULL)
		{
			return (-1);
		}
		if (access(filename, W_OK) == -1 || access(filename, R_OK) == -1)
		{
			return (-1);
		}
		else
			return (1);
	}
	fptr = fopen(filename, "a");
	fprintf(fptr, "%s", text_content);
	fclose(fptr);
	return (1);
}
