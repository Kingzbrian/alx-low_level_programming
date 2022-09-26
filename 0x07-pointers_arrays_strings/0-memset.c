#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory
 * @s: pointer
 * @b: constant byte
 * @n: integer bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i += 1;
	}
	return (s);
}
