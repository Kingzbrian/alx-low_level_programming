#include "main.h"
/**
 * print_number - function to print integers
 * @n: integer to be printed
 * Return: 0
 */
void print_number(int n)
{
	int i;
	int j;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = 0; n / div > 9; i++, div *= 10)
	{
		;
	}
	for (; div >= 1; n %= div, div /= 10)
	{
		j = n / div;
		_putchar('0' + j);
	}
}
