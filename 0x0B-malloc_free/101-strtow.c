#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - frees a 2 dimensional array
 * @grid: multidimensional array
 * @height: height
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **cat;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	cat = malloc((height + 1) * sizeof(char *));
	if (cat == NULL || height == 0)
	{
		free(cat);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				cat[i] = malloc((c - a1 + 2) * sizeof(char));
				if (cat[i] == NULL)
				{
					ch_free_grid(cat, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			cat[i][j] = str[a1];
		cat[i][j] = '\0';
	}
	cat[i] = NULL;
	return (cat);
}
