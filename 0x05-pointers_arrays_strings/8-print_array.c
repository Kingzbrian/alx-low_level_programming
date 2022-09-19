#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: array pointer
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i])
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
