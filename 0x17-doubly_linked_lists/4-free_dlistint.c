#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 * Return: Nothing (void)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *n;

	while (temp->next != NULL)
	{
		n = temp->next;
		free(temp);
		temp = n;
	}
}
