#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory
 * @b: count of bytes
 * Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(sizeof(char) * b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
