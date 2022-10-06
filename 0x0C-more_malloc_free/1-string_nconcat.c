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
	char *a;
	unsigned int x, n1 = 0, n2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[n1] != '\0'; n1++)
		;
	for (j = 0; s1[n2] != '\0'; n2++)
		;
	if (n < n2)
		x = n;
	else
		x = n2;
	a = malloc(sizeof(char) * (n1 + x + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < x; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = 0;
	return (a);
}
