#include<stdlib.h>

#include<time.h>

#include<stdio.h>
/**
 * main - a function that prints a random number every time it's excuted and 
 * tells wich is postive or negative
 *Return:(0) success
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2 ;
	if (x > 0)
	{
	printf("%d is positive\n", x);
	}
	else if (x < 0)
	{
	printf("%d is negative\n", x);
	}
	else
	{
	printf("%d is zero\n", x);
	} 
	return (0);
}
