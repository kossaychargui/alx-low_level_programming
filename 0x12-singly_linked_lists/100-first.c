#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * main - function that prints You're beat! and yet, you must allow,\nI bore
 * my house upon my back!\n
 *
 * Return: 0 success.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
