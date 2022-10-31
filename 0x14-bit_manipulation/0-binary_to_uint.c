#include "main.h"
/**
 * binary_to_uint - function to convert binary to int
 * @b: value
 * Return: int no
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k;
	int i = 0;

	if (!b)
		return (0);
	for (k = 0; b[k];)
		k++;
	for (k -= 1; k >= 0; k--)
	{
		if (if b[k] != '0' && b[k] != '1')
			return (0);
		i = (b[k] - '0') + 2 * i;
	}
	return (i);
}
