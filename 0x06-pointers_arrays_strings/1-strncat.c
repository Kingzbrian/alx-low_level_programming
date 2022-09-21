#include "main.h"
/**
 * _strncat - Function to return concatenated strings
 * @dest: destination
 * @src: source
 * @n: size of src
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
