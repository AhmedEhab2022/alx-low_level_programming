#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 *
 * @ac: The counter of arguments
 * @av: pointer to arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k, l;

	l = 0;

	if (ac == 0 || av == NULL)
	{
		p = '\0';
		return (p);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	k++;

	p = malloc(k * sizeof(char));

	if (p == NULL)
		return (p);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[l] = av[i][j];
			l++;
		}

		p[l] = '\n';
		l++;
	}

	p[l] = '\0';
	return (p);
}
