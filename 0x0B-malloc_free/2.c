#include "main.h"
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		return "";
	if (s2 == NULL)
		return "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	c = malloc(sizeof(char) * (i + j + 1));
	if (c == NULL)
	{
		free(c);
		return NULL;
	}
	for (k = 0; k < i; k++)
		c[k] = s1[k];
	for (l = 0; l < j; k++, l++)
		c[k] = s2[l];
	return c;

}
