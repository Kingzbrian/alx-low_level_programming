#include <stdio.h>
#include <math.h>
/**
 * main - start
 * Description: find largest prime factor
 * Return: 0
 */
int main(void)
{
	int c;
	unsigned long int num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c--)
	{
		if (num % c == 0)
		{
			printf("%u\n", c);
			break;
		}
	}
	return (0);
}
