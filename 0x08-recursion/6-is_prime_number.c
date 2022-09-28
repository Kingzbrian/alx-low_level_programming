#include "main.h"
/**
 * divs - checks if no is divisible
 * @num: number
 * @div: divisor
 * Return: if divisor
 */
int divs(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (divs(num, div + 1));
}
/**
 * is_prime_number - identify prime numbers
 * @n: Integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (divs(n, div));
}
