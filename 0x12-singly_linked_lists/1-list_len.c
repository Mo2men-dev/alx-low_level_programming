#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t n = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		n += 1;
	}

	return (n);
}
