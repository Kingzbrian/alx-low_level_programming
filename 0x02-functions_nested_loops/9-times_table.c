#include "main.h"
/**
 *times_table - print times table of 9
 *Return: end
 */
void times_table(void)
{
	int row, col, mult;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mult = row * col;
			if (col == 0)
			{
				_putchar('0' + mult);
			}
			else if (mult < 10)
			{
				_putchar(' ');
				_putchar('0' + mult);
			}
			else
			{
				_putchar('0' + mult / 10);
				_putchar('0' + mult % 10);
			}
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
