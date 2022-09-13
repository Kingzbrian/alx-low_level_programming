#include <stdio.h>
/**
 * main - start
 * Return: end
 */
int main(void)
{
	long int a = 0, b = 1, d;
	int c;
	
	printf("%ld", b);
	for (c = 0; c < 50; c++)
	{
		d = a + b;
		a = b;
		b = d;
		if (d != 1)
		{
			printf(", %ld", d);
		}
	}
	return (0);
}
