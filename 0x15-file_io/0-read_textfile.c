#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * standard output
 *
 * @filename: the file name
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t w, r;

	fd = open(filename, O_WRONLY);
	if (fd = -1)
		return (0);
	buffer = malloc(sizeof(letters));
	r = read(fd, buffer, letters);
	if (r = -1)
		return (0);
	w = write(fd, buffer, letters);

	return (w);
}
