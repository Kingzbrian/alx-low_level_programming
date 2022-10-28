#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free the list
 * @head: pointer to start
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp2 = head;
	while ((temp = temp2) != NULL)
	{
		temp2 = temp2->next;
		free(temp);
	}
}
