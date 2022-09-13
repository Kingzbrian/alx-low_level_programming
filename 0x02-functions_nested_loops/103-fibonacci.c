#include <stdio.h>
/**
 * main - start
 * Return: end
 */
int main(void)
{
	int i = 0, j = 1, tt = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
		{
			tt += j;
		}
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", tt);
	return (0);
}
