#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the list
 * @head: head of the list
 * @n: elements
 * Return: NULL if fain or adress of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *last = (*head);
	newnode = malloc(sizeof(listint_t));
	
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		 *head = newnode;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newnode;
	}
	return (*head);
}
