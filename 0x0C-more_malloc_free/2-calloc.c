#include "main.h"
#include <stdlib.h>
/**
 * simple_print_buffer - function to return pointer to allocated mem
 * @nmemb: no of elements
 * @size: no of bytes
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char * c;
	unsigned int i;

	c = malloc(sizeof(int) * nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		c[i] = 0;
	}
	return (c);
}
