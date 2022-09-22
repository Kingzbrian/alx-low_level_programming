#include "stdio.h"
/**
 * reverse_array - print reversed array
 * @a: array
 * @n: array size
 * Return: array reversed
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		temp = *(a + j);
		*(a + j) = *(a + (j - 1));
		*(a + (j - 1)) = temp;
	}
}
