#include "function_pointers.h"
/**
 * print_name - functio to print namE
 * @name: name
 * @f: function pionter
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
