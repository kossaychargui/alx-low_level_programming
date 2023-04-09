#include <stdio.h>

/**
 * main - entry point of the program.
 *
 * @argc: an integer stands for the number of agruments passed to the command
 * line by the user
 *
 * @argv: an array of strings that holds the arguments passed to the command
 * line by the user
 *
 * Return: (0) success .
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
