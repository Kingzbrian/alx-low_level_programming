#include "main.h"
/**
 * _memset - fills the first @n bytes of the memory
 * @s: Pointer to a memory area
 * @b: Value that is to fill up memory area @s
 * @n: number of bytes of memory area
 * Return: tom mem area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
