#include <stdio.h>
#include <stdlib.h>

/**
 * give_cents - function that returns the minumum number of coins to make
 * change for an amount of money.
 *
 * @coins: the amount of money
 *
 * Return: cents, the amount of cents to give.
 */
int give_cents(int coins)
{
	int cents, c1, c2, c3, c4, c5;

	c1 = coins / 25;
	c2 = (coins - c1 * 25) / 10;
	if (c2 == 0)
	{
		c2 = coins - c1 * 25;
	}
	c3 = (coins - c2 * 10) / 5;
	if (c3 == 0)
	{
		c3 = coins - c2 * 10;
	}
	c4 = (coins - c3 * 5) / 2;
	if (c4 == 0)
	{
		c4 = coins - c3 * 5;
	}
	c5 = (coins - c4 * 2) / 1;
	cents = c1 + c2 + c3 + c4 + c5;
	return (cents);
}

/**
 * main - entry point of the code . a program that prints the minumum number
 * of coins to make change for and amount of money.
 *
 * @argc: number of arguments passed in the command line.
 * @argv: array of strings holds the arguments passed in the command line.
 *
 * Return: 1 if the number of arguments passed is not exactly 1 otherwise 0 .
 *
 */
int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);

	cents = give_cents(coins);
	printf("%d\n", cents);
	return (0);
}
