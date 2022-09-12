#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int n = 1;

	while (n <= 10)
	{
		char al = 'a';

		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		n++;
		_putchar('\n');
	}
}
