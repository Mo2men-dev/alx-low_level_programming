#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: Pointer to the input string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + _strlen(str + 1));
}
