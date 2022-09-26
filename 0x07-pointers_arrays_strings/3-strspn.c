#include "main.h"
/**
 * _strspn : get length of prefixed substring
 * @s: pointer
 * @accept: source
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j = 0;
	unsigned int k;

	while (*s != '\0')
	{
		i = 0;
		while (accept[j] != '\0')
		{
			if(*s == accept[j])
			{
				i = 1;
			}
			++j;
		}
		j = 0;
		if (i == 0)
		{
			break;
		}
		++k;
		s++;
	}
	return (k);
}
