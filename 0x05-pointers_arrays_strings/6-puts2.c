#include "main.h"
/**
 * puts2 - prints every xter of a string in a new line
 * @str: pointr\er to string
 */
void puts2(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}
}
