#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create an array of chatacters
 * @size: size of the array
 * @c: stored character
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;
	
	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(c) * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = c;
	}
	return (p);
}
