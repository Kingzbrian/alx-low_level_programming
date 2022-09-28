#include "main.h"
/**
 * find_sqrt - return natural squareroot iof a no
 * @n: input no
 * @c: iterator
 * Return: square root or -1
 */
int find_sqrt(int n, int c)
{
	if (c * c == n)
		return (c);
	if (c == n / 2)
		return (-1);
	return (find_sqrt(n, c + 1));
}
/**
 * _sqrt_recursion - find squareroot
 * @n: number
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	int c = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (find_sqrt(n, c));
}
