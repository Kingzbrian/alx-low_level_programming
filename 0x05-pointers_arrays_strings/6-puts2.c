#include "main.h"
/**
 * puts2 - prints every xter of a string in a new line
 * @str: pointr\er to string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
