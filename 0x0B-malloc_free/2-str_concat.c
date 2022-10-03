#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2:string 2
 * Return: NULL or pointer to mem space
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	cat = (char *)malloc(sizeof(char) * (i + j + 1));
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		cat[k] = s1[k];
	}
	for (l = 0; l < j; k++, l++)
		cat[k] = s2[l];
	return (cat);
}
