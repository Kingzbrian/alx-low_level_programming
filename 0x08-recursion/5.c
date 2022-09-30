#include "main.h"
int _sqrt_find(int n, int c)
{
	if (c * c == n)
		return (c);
	if (c == n / 2)
		return (-1);
	return (_sqrt_find(n, c + 1));
}
int _sqrt_recursion(int n)
{
	int c = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return _sqrt_find(n, c);
}
