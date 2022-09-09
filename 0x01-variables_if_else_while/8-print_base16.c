#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: end of program
 */
int main(void)
{
	int a = 0;

	char kk = 'a';

	while (a < 10)
	{
		putchar(48 + a);
		a++;
	}
	while (kk <= 'f')
	{
		putchar(kk);
		kk++;
	}
	putchar('\n');
	return (0);
}
