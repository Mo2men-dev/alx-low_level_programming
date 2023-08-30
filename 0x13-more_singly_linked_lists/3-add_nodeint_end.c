#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_el = malloc(sizeof(listint_t));
	listint_t *curr;

	if (new_el == NULL)
		return (NULL);

	new_el->n = n;
	new_el->next = NULL;

	if (*head == NULL)
	{
		*head = new_el;
	}
	else
	{
		curr = *head;

		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_el;
	}

	return (new_el);
}

