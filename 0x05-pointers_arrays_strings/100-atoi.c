#include "main.h"
/**
 * _atoi - function
 * @s: pointer
 * Return: variable
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int str = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
		{
			str *= -1;
		}
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	str *= -1;
	return (n * str);
}
