#include "main.h"
/**
 * swap_int - return swaped value
 * @a: value 1
 * @b: value 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
