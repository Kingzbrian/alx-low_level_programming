#include "main.h"
/**
 *_abs - compute abolute value
 *@a: input
 *Return: end
 */
int _abs(int a)
{
	if (a == 0)
	{
		return (0);
	}
	else if (a > 0)
	{
		return (a);
	}
	else
	{
		return (-a);
	}
}
