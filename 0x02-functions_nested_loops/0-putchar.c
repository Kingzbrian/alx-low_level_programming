#include "main.h"
/**
 * main - Begnning
 * Return: end
 */
int main(void)
{
	char string[8] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		_putchar(string[x]);
		++x;
	}
	_putchar('\n');
	return (0);
}
