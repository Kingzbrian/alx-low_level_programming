#include <stdio.h>
/**
 * main - start
 *Return: end
 */
int main(void)
{
	unsigned long int j = 1, k = 2, j1, j2, k1, k2;
	int c;

	printf("%lu", j);
	for (c = 0; c < 91; c++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
		j1 = j / 1000000000;
		j2 = j % 1000000000;
		k1 = k / 1000000000;
		k2 = k % 1000000000;
	for (c = 92; c < 99; c++)
	{
		printf(", %lu", k1 + k2 / 1000000000);
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	putchar('\n');
	return (0);
}
