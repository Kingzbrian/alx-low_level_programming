#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: startof list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp22;

	if (head != NULL)
	{
		temp22 = *head;
		while ((temp = temp22) != NULL)
		{
			temp22 = temp22->next;
			free(temp);
		}
		*head = NULL;
	}
}
