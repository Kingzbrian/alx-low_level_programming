#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function to return pointer to allocated mem
 * @nmemb: no of elements
 * @size: no of bytes
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	_memset(c, 0, nmemb * size);
	return (c);
}
/**
 * _memset - fills mem with a nstant byte
 * @s: return mem
 * @b: constant byte
 * @n: size of bytes
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsugned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i += 1;
	}
	return (s);
}
