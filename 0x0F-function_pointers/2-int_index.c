#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array of integers
 * @array: The array
 * @size: The size of the array
 * @cmp: A pointer to the function
 * Return: 0, 1, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	if (i == size)
		return (-1);
	return (-1);
}
