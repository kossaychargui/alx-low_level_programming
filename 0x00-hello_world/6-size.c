#include<stdio.h>
/**
 * main - A function that prints the size of char, int, long int,
 * long long int,float
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", (unsigned long)
		sizeof(long long int));
printf("Size of float: %ld byte(s)\n", (unsigned long)sizeof(float));
return (0);
}