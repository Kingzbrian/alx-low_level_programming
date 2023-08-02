#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create an array
 * @size: size of array
 * @c: The specific char to intialize the array with.
 * Return: null, pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
