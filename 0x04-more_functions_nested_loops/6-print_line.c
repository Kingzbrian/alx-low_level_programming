#include "main.h"
/**
 * print_line - print straight line
 * @n: input
 * Return; 0
 */
void print_line(int n)
{
	char a = '_';
	int b = 0;

	while (b < n && n > 0)
	{
		_putchar(a);
		b++;
	}
	_putchar('\n');
}
