#include "main.h"
/**
 *print_last_digit - print last digit
 *@a: input
 *Return: end
 */
int print_last_digit(int a)
{
	int d = a % 10;

	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}
