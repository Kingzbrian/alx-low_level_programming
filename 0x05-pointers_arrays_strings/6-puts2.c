#include "main.h"
/**
 * puts2 - prints every xter of a string in a new line
 * @str: pointr\er to string
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
