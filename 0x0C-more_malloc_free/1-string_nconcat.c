#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - funct to concatenate 2 strings
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * @n: no of bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s1[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	k = i + n;
	c = malloc(sizeof(k + 1));
	if (c == NULL)
		return (NULL);
	for (l = 0; l < k; l++)
	{
		if (l < i)
			c[l] = s1[l];
		else
			c[l] = s2[l - i];
	}
	c[l] = '\0';
	return (c);
}
