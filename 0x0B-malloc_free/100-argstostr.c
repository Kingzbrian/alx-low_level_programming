#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer of an array
 */
char *argstostr(int ac, char **av)
{
	char *cat;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	cat = malloc((c + 1) * sizeof(char));
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}
	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			cat[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			cat[k] = av[i][j];
	}
	cat[k] = '\0';
	return (cat);
}
