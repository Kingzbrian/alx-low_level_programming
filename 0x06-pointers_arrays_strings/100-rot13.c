#include "main.h"
/**
 * rot13 - encode string using rot 13
 * @z: pointer to string
 * Return: encoded string
 */
char *rot13(char *z)
{
	int i = 0, j;
	char ns[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (z[i] != '\0')
	{
		j = 0;
		while (j < 54)
		{
			if (((z[i] <= 'z' && z[i] >= 'a') || (z[i] <= 'Z' && z[i]
					>= 'A')) && z[i] == ns[j])
			{
				z[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (z);
}
