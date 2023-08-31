#include "lists.h"

/**
 * pop_listint - Removes and returns the first element of a linked list.
 * @head: A pointer to a pointer to the head node of the linked list.
 *
 * Return: The value of the popped node's integer.
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head != NULL)
	{
		pop = *head;
		*head = (*head)->next;
		n = pop->n;
		free(pop);
		return (n);
	}
	return (0);
}

