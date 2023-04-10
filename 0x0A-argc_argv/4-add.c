#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int check(char str[])
{
	int i, chek, len;
	chek = 0;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (isdigit(str[i]) == 0)
		{
			chek = 1;
		}
	}
	if (chek == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		if (check(argv[j]) == 1)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
