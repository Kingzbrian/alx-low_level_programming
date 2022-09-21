#include "stdio.h"
/**
 * reverse_array - print reversed array
 * @a: array
 * @n: array size
 * Return: array reversed
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, k;
	j = n - 1;

	while (i < n/2)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
		i++;
	}
}
