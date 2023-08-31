#include <stddef.h>
#include <stdlib.h>
#include "your_header_file_here.h"

/**
 * insert_nodeint_at_index - Insert a new node with a given value at idx.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be stored in the new node.
 *
 * Return: pntr to new node or NULL if alloc fails or the idx is out of bound
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *old, *tmp;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	old = *head;
	tmp = (*head)->next;
	while (tmp != NULL)
	{
		if (i == idx)
		{
			old->next = new;
			new->next = tmp;
			return (new);
		}
		old = tmp;
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL && i == idx)
	{
		old->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}

