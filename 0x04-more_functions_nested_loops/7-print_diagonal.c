#include "main.h"
/**
 * print_diagonal - function
 * @n: parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int b = 0, a;

	while (b < n && n > 0)
	{
		a = 0;
		while (a < b)
		{
			_putchar(' ');
			a++;
		}
		_putchar('\\');
		_putchar('\n');
		b++;
	}
	if (b == 0)
	{
		_putchar('\n');
	}
}
