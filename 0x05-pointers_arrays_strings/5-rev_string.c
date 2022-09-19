#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer
 * Return: reversed string
 */
void rev_string(char *s)
{
	char z;
	int a, b, i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	a = 0;
	b = i / 2;
	while (b--)
	{
		z = s[i - a - 1];
		s[i - a - 1] = s[a];
		s[a] = z;
		a++;
	}
}
