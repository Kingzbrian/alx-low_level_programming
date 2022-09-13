#include <stdio.h>
/**
 * main - start
 * Return: end
 */
int main(void)
{
	int a, b;
	/**
	 * a is the multiples
	 * b is the result
	 */
	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
