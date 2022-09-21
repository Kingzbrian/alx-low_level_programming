#include "stdio.h"
/**
 * string_toupper : changes all lowercase to uppercase
 * @z : pointer to string
 * Return: string in uppercase
 */
char *string_toupper(char *z)
{
	int i = 0;

	while (z[i] != '\0')
	{
		if (z[i] >= 97 && z[i] <= 122)
		{
			z[i] = z[i] - ' ';
		}
		i++;
	}
	return (z);
}
