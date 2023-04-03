#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: 2D array that contains chessboard
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%d", a[i][j]);
		if (j == 7)
		{
			putchar('\n');
		}
		}
	}
}
