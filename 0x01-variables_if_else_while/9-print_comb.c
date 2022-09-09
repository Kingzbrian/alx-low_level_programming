#include <stdio.h>
/**
 * main - Entry
 * Return: end of program
 */
int main(void)
{
	int z = 0;

	while (z < 10)
	{
		if (z != 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(48 + z);
		z++;
	}
	putchar('\n');
	return (0);
}
