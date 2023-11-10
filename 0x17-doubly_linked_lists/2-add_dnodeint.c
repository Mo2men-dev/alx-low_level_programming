#include "lists.h"

/**
 * add_dnodeint - function that adds node to the the bennging of a linked list
 * @head: head of the linked list
 * @n: data of the node (int)
 * Return: pointer to new element on succsess NULL on fail
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
