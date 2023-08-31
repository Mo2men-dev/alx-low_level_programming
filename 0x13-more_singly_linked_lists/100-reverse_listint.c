#include "lists.h"

/**
 * reverse_listint - Reverses linked list in place.
 * @head: A pointer to a pointer to head node of linked list.
 * Return: A pointer to the new head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *tmp;

	if (*head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	old = *head;
	*head = NULL;

	while (old != NULL)
	{
		tmp = old->next;
		old->next = *head;
		*head = old;
		old = tmp;
	}

	return (*head);
}

