#include "lists.h"

/**
 * free_listint - Frees the memory of a linked list.
 * @head: A pointer to the head node of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
