#include <stddef.h>
#include <stdlib.h>
#include "your_header_file_here.h"

/**
 * delete_nodeint_at_index - Deletes a node at index in a linked list.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @index: The index of the node to be deleted.
 * Return: 1 if success -1 if the index is out of bounds or the list is empty.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old, *tmp;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	old = *head;
	tmp = (*head)->next;
	while (tmp != NULL)
	{
		if (i == index)
		{
			old->next = tmp->next;
			free(tmp);
			return (1);
		}
		old = tmp;
		tmp = tmp->next;
		i++;
	}

	return (-1);
}

