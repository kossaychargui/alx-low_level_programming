#include <stdio.h>

/**
 * main - entry point of the program .
 *
 * @argc: number of arguments passed in the command line by the user
 *
 * @argv: array of strings holds the arguments passed in the command line
 * by the user
 *
 * Return: (0) success
 *
 */
int main(int argc), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
