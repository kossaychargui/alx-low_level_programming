#include "main.h"
#include <stdlib.h>

/**
 * _size - function that returns the size of all the arguments.
 *
 * @ac: number of arguments.
 * @av: array of strings hold the arguments.
 *
 * Return: the size.
 *
 */
int _size(int ac, char **av)
{
	int i, j, size;

	size = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			size++;
			j++;
		}
	}
	return (size);
}
/**
 * argstostr - funtion that concatenates all the arguments of a program.
 *
 * @ac: number of arguments passed in the command line.
 * @av: array of strings holds the arguments passed in the command line.
 *
 * Return: NULL if ac = 0 ro av = 0 or the allocation fails othewise
 * the string that hold all the aruments concatenated.
 *
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, size, h;
	int *t;

	t = (int *)malloc(sizeof(int) * ac);
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	size = _size(ac, av);
	str = (char *)malloc(sizeof(char) * (size + 1 + ac));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			t[i]++;
	}
	h = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[h] = av[i][j];
			j++;
		}
		h++;
		str[j + t[i]] = '\n';
	}
	return (str);
}
