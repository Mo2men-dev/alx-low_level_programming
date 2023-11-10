#include "lists.h"

/**
 * print_dlistint - Prints the contents of a double-linked list.
 * @h: A pointer to the head of the double-linked list.
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int l = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		l++;
	}

	return (l);
}
