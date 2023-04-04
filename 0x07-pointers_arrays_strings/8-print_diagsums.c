#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of square matriw of integers
 *
 * @a: matrix of integers
 * @size: size of matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i][j];
				sum2 += a[i][j];
			}
			if (abs(i - j) == i)
			{
				sum2 += a[i][j];
			}
		}
	}
}
