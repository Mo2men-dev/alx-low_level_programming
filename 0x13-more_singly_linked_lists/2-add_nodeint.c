#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_el;

	new_el = malloc(sizeof(listint_t));
	if (new_el == NULL)
		return (NULL);

	new_el->n = n;
	new_el->next = *head;

	*head = new_el;

	return (new_el);
}

