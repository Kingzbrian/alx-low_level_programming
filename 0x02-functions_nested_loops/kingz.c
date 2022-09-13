#include <stdio.h>
/**
 * main - start
 * Return: end
 */
int main(void)
{
	long int a = 0, b = 1, d;
	int result = 0;

	for (d = 0; d < 4000000; d++)
	{
		d = a + b;
		a = b;
		b = d;
		if (d % 2 == 0)
		{
			result += d;
		}
	}
	printf("%i\n", result);
	return (0);
}
