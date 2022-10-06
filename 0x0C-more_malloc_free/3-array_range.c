#include "main.h"
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer
 * @buffer: the address
 * @size: the size
 * Return: null or pointer
 */
int *array_range(int min, int max)
{
	int *c;
	int j;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(int) * (min - max + 1);
	if (c == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		c[j] = min;
	return (c);
}
