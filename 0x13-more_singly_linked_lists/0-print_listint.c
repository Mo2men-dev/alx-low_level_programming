#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list of integers.
 * @h: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}

