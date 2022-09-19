#include "main.h"
/**
 * puts_half - prints the last half of a string
 * @str: poiter to string
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i])
	{
		i++;
	}
	n = i / 2;
	if (i % 2 != 0)
	{
		n += 1;
	}
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
