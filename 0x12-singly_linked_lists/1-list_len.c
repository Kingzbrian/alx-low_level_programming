#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - length of elements
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
