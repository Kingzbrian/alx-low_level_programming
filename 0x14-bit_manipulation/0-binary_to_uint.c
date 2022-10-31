#include "main.h"
/**
 * binary_to_uint - function to convert binary to int
 * @b: value
 * Return: int no
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k, mult = 1;

	if (!b)
		return (0);
	for (k = 0; b[k]; k++)
	for (k -= 1; k >= 0; k--)
	{
		if (if b[k] != '0' && b[k] != '1')
			return (0);
		i = ((b[k]) * mult);
		mult *= 2;
	}
	return (i);
}
