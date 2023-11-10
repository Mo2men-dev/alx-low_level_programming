#include "lists.h"

/**
 * get_dnodeint_at_index - get node by index
 * @head: list
 * @index: index of element
 * Return: element by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *temp = head;

	while (c != index && temp != NULL)
	{
		temp = temp->next;
		c++;
	}

	if (c < index)
		return (NULL);

	return (temp);
}
