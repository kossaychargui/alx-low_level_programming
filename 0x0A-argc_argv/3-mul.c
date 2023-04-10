#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc: number of arguments passed in the command line
 * @argv: array of string contains arguments passsed in the command line
 *
 * Return: 1 if the program does not recieve two arguments otherwise 0 .
 *
 */
int main(int argc, char *argv[])
{
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", a * b);
		return (0);
	}
}
