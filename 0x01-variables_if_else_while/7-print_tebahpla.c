#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: end the program
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
