#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print the list
 * @h: pointer to list
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
