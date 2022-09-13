#include <stdio.h>
/**
 * main - start
 * Return: end
 */
int main(void)
{
	long int a = 0, b = 1, d;
	int c = 0;

	for (c = 0; c < 50; c++)
	{
		d = a + b;
		a = b;
		b = d;
		printf("%ld", d);
		if (c < 49)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
