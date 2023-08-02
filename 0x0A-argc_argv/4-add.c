#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: count
 * @argv:string
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		j = atoi(argv[argc]);
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}
