#include <stdio.h>
/**
 * main - Entry
 * Return: end the program
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar ('\n');
	return (0);
}
