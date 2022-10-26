#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - funct to return no of elements
 * @h: pointer to list
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
