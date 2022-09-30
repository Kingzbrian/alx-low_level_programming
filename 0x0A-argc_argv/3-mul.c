#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: count
 * @argv: string
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
