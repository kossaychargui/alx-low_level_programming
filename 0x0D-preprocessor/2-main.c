#include <stdio.h>

/**
 * main - entry point of the program. program that prints the name of the file
 * it was compiled from.
 *
 * Return: (0) success.
 *
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
