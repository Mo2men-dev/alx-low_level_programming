#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head node of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
