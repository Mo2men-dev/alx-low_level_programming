#include "lists.h"

/**
 * add_dnodeint_end - add element at the end of the list
 * @head: list
 * @n: element in list
 * Return: new element/NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->n = n;
	new->next = NULL;
	new->prev = temp;

	return (new);
}
