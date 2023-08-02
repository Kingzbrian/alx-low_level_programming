#include "main.h"
#include <stdlib.h>
/**
 * _strdup -Function to return pointer to a new string
 * @str: string to return
 * Return: NULL or pointer to string
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	arr = (char *) malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		arr[j] = str[j];
	return (arr);
}
