#include "lists.h"

/**
 * get_nodeint_at_index - Returns node at a specific index in a linked list.
 * @head: A pointer to the head node of the linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *find;
	unsigned int a = 0;

	if (head != NULL)
	{
		find = head;
		while (find != NULL)
		{
			if (a == index)
				return (find);
			find = find->next;
			a++;
		}
	}

	return (NULL);
}

