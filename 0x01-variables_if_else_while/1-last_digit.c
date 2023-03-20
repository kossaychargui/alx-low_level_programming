#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - function that prints if the last digit of a random number is
 *greter than 5, is 0 or less than 6 and not 0
 *
 *Return:(0) success
 */
int main(void)
{
	int n, h;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	h = n % 10;

	if (h > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, h);
	}
	else if (h == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, h);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, h);
	}
	return (0);
}
