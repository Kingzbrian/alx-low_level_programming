#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - fuction to print list
 * @h: pointer to list to be printed
 * Return: no of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
