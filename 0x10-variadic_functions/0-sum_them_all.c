#include "variadic_functions.h"
/**
 * sum_them_all - function
 * @n: parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_args(args, int);
	}
	va_end(va_list);
	return (sum);
}