#include <stdio.h>
#include <stdlib.h>
/**
 * close - function that closes a file and exits with 100 and prints an error
 * message if closing failed.
 *
 * @f: file to close.
 *
 */
void close(FILE *f)
{
	int restul;

	resutl = fclose(f);
	if (result == -1)
	{
		printf("Error: Can't close fd %d\n", result);
		exit(100);
	}
}
/**
 * main - entry point of the program. program that copies the contentof a file
 * to another file.
 *
 * @argc: argument counter .
 * @argv: array of string holds the commands entred in the command line.
 *
 * Return: 0 success.
 */
int main(int argc, char **argv)
{
	int i;
	char buffer[1024];
	FILE *f1, *f2;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = fopen(argv[1], "w+");
	if (f1 == NULL)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = fopen(argv[2], "w");
	if (f2 == NULL)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (fgets(buffer, 1024, f1) != NULL)
	{
		i = 0;
		while (buffer[i] != '\0')
		{
			fprintf(f2, "%c", buffer[i]);
			i++;
		}
	}
	close(f1);
	close(f2);
	return (0);
}
