#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function to return pointer to allocated mem
 * @nmemb: no of elements
 * @size: no of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		;
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (c);
}
