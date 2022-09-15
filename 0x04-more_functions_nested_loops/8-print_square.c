#include "main.h"
/**
 * print_square - function
 * @size: parameter
 * Return: 0
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
