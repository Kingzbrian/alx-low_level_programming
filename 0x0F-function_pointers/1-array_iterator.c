#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: array
 * @size:  size of the array
 * @action: pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i == 0; 1 < size; i++)
		action(array[i]);
}