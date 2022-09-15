#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 1 - 14
 * Return: 0
 */
void more_numbers(void)
{
	int b = 0, a;

	while (b <= 10)
	{
		a = 0;
		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
			a++;
		}
		b++;
		_putchar('\n');
	}
}
