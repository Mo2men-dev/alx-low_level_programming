#include "lists.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: Pointer to the input string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}

	return (1 + _strlen(str + 1));
}

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_el = malloc(sizeof(list_t));

	if (new_el == NULL)
	{
		return (NULL);
	}

	new_el->str = strdup(str);
	if (new_el->str == NULL)
	{
		free(new_el);
		return (NULL);
	}

	new_el->len = _strlen(str);
	new_el->next = *head;

	*head = new_el;

	return (new_el);
}

