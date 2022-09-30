#include "main.h"
/**
 * _memcpy - Copies content from source to destination
 * @src: Source memory area
 * @n: Number of bytes
 * @dest: Destination memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
