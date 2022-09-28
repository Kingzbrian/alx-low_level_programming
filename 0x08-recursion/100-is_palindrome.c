#include "main.h"
/**
 * len - returns length of a string
 * @s: string
 * Return: length of a strig
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}
/**
 * comp - compares string xters
 * @s: string
 * @n1: smallest iterator
 * @n2: largest it
 * Return: nothing
 */
int comp(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detect if a string is palidrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, len(s) - 1));
}
