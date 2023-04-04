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
	int i, j, sum1, sum2, n1, n2;

	sum1 = 0;
	sum2 = 0;
	n1 = 0;
	n2 = size - 1;


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i][j];
			}
			if (i == n1 && n2 == n2)
			{
				sum2 += a[i][j];
				n1++;
				n2--;
			}
		}
	}
}
