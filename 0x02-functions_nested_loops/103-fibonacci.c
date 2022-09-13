#include <stdio.h>
/**
 * main - start
 * Return: end
 */
int main(void)
{
	long int a = 0, b = 1, d, result;
	int c;

	for (c = 0; c < 4000000; c++)
	{
		d = a + b;
		a = b;
		b = d;
		if (d % 2 == 0)
		{
			result += d;
		}
	}
	printf("%ld", result);
	return (0);
}
