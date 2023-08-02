#include "main.h"
/**
 * _strchr - Loctes a character
 * @s: The string
 * @c: The character
 * Return: string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);

}
