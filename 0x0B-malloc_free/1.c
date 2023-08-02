#include "main.h"
#include <stdlib.h>
char *_strdup(char *str)
{
	char *c;
	int i, j;

	if (str == NULL)
	{
		return NULL;
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	c = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return NULL;
	for (j = 0; j <= i; j++)
		c[j] = str[i];
	return c;
}
