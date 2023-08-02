#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - Deletes a list
 * @head: start point
 * Return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *temp;
	listint_t *h;

	if (*head == NULL)
		return (0);
	temp = *head;
	a = temp->n;
	h = temp->next;
	free(temp);
	*head = h;
	return (a);
}

