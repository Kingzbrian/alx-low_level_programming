#include "main.h"
/**
 *jack_bauer - print minutes
 *Return: end
 */
void jack_bauer(void)
{
	int hour, i, j, minute, k, l;

	for (hour = 0; hour <= 23; hour++)
	{
		i = hour / 10;
		j = hour % 10;
		for (minute = 0; minute < 60; minute++)
		{
			k = minute / 10;
			l = minute % 10;
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
		}
	}
}
