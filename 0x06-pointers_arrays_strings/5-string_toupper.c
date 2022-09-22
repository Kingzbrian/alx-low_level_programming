#include "stdio.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @s : pointer to string
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
		{
			*(s + count) = *(s + count) - 32;
		}
		count++;
	}
	return (s);
}
